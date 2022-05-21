#include<stdio.h>
#include<arpa/inet.h>
#include<strings.h>
int main(int argc, char *argv[])
{
        /*struct sockadd_in
         {
         sa_family_t sin_family;
         in_port_t sin_port;
         struct in_addr sin_addr;
         }
         struct in_addr{
         in_addr_t s_addr;
         }
         in_addr_t inet_addr(const char *str);
         */

        struct sockaddr_in s1, s2;
        s1.sin_addr.s_addr = inet_addr(argv[1]);

        //int inet_aton(const char *str, struct in_addr *addrptr)
        inet_aton(argv[1],&s2.sin_addr);

        if(bcmp(&s1.sin_addr,&s2.sin_addr,sizeof(struct in_addr))==0)
        {
                printf("both are same\n");
        }
        else
        {
                printf("both are different\n");
        }
        return(0);
}
