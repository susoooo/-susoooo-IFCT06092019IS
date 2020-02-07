#define PORTNUMBER 12563
int main(void)
{
char buf[1024];
int s,n,ns, len;
struct sockaddr_in name;

s=socket(PF_INET,SOCK_STREAM,0);
name.sin_family = AF_INET;
name.sin_port = htons(PORTNUMBER);
name.sin_addr.s_addr = hton1(INADDR_ANY);
len = sizeof(struct sockaddr *);

bind(s,(struct sockaddr*)&name, len);








}


