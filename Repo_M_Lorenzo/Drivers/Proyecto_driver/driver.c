/*Includes do kernel */

#include <linux/init.h>
//#include <linux/config.h>
#include <linux/module.h>
#include <linux/kernel.h> /* printk() */
#include <linux/slab.h>   /* kmalloc() */
#include <linux/fs.h>     /* everything... */
#include <linux/errno.h>  /* error codes */
#include <linux/types.h>  /* size_t */
#include <linux/proc_fs.h>
#include <linux/fcntl.h>  /* O_ACCMODE */
//#include <asm/system.h>   /* cli(), *_flags */
#include <asm/uaccess.h>  /* copy_from/to_user */

MODULE_LICENSE("Dual BSD/GPL");

/*Declaracion de funcions*/

int memory_open(struct inode *inode, struct file *filp);

int memory_release(struct inode *inode, struct file *filp);

ssize_t memory_read(struct file *filp, char *buf, size_t count, loff_t *f_pos);

ssize_t memory_write(struct file *filp, const char *buf, size_t count, loff_t *f_pos);

void memory_exit(void);

int memory_init(void);




/*Struct de funcions de acceso*/

struct file_operations memory_fops = {

  read: memory_read,

  write: memory_write,

  open: memory_open,

  release: memory_release

};

/*Variables globais*/

/* Major number */

int memory_major = 60;

/* Buffer to store data */

char *memory_buffer;

#define TAM 20

char *lectura;

/*Inicializacion dispositivo*/

int memory_init(void) {
	int result;
  struct file *archivo;
  mm_segment_t fs;

  /* Registering device */
	result = register_chrdev(memory_major, "memory", &memory_fops);
	if (result < 0) {
		printk("<1>memory: cannot obtain major number %d\n", memory_major);
		return result;
	}
 /* Allocating memory for the buffer */
	lectura = kmalloc(TAM, GFP_KERNEL);
	memory_buffer = kmalloc(TAM, GFP_KERNEL);
	if (!lectura) {
    	result = -ENOMEM;
    	memory_exit();
	return result;
	}
	memset(memory_buffer, 0, TAM);
  	memset(lectura,0,TAM);
	printk("<1>Inserting memory module\n");

   archivo = filp_open("/Documentos/Repositorio/Drivers/Proyecto_driver/insultator", O_RDONLY, 0);
    if(archivo == NULL)
        printk(KERN_ALERT "filp_open error!!.\n");
    else{
        // Get current segment descriptor
        fs = get_fs();
        // Set segment descriptor associated to kernel space
        set_fs(get_fs());
        // Read the file
        archivo->f_op->read(archivo, lectura, TAM, &archivo->f_pos);
        // Restore segment descriptor
        set_fs(fs);
        // See what we read from file
        printk(KERN_INFO "lectura:%s\n",lectura);
    }
    filp_close(archivo,NULL);
	return 0;

}

/*Eliminando dispositivo*/

void memory_exit(void) {
  /* Freeing the major number */
  unregister_chrdev(memory_major, "memory");
  /* Freeing buffer memory */
  if (memory_buffer) {
    kfree(memory_buffer);
  }
  printk("<1>Removing memory module\n");
}

/*Abrir dispositivo*/

int memory_open(struct inode *inode, struct file *filp) {
  		/* Success */
  return 0;
}

/*Cerrar dispositivo*/

int memory_release(struct inode *inode, struct file *filp) {
  /* Success */
  return 0;
}

/*Leer dispositivo*/
ssize_t memory_read(struct file *filp, char *buf, size_t count, loff_t *f_pos) {
  /* Transfering data to user space */
  raw_copy_to_user(buf,lectura,TAM);
  /* Changing reading position as best suits */
  if (*f_pos == 0) {
    *f_pos+=TAM;
    return TAM;
  } else {
    return 0;
  }
}
 /*Escribir dispositivo*/

ssize_t memory_write( struct file *filp, const char *buf, size_t count, loff_t *f_pos) {
  char *tmp;
  tmp=buf+count-1;
  raw_copy_from_user(lectura,tmp,TAM);
  return 1;
}

/*Funcions init e exit*/

module_init(memory_init);

module_exit(memory_exit);


