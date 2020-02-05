#include <linux/init.h>
#include <linux/kernel.h>

#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");


static int hola_init(void){
	printk("<1> Hola mundo kernel!!!\n");
return(0);
}

static void hola_exit(void){
	printk("<1> Boas noites kernel!!!\n");
return(NULL);
}

module_init (hola_init);
module_exit (hola_exit);
