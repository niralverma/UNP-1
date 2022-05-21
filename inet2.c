#include<stdio.h>
#include<arpa/inet.h>
#include<strings.h>
int main(int argc,char *argv[])
{
        struct sockaddr_in s;
        /*
        if(inet_aton(argv[1],&s.sin_addr)==0)
        {
                printf("invalid ip");
        }
        else
        {
                printf("valid ip");
        }


        //CHAR * INET_NTOA(STRUCT IN_ADDR INADDR)
        printf("the entered ip is %s\n", inet_ntoa(s.sin_addr));*/


        if(inet_pton(AF_INET,argv[1],&s.sin_addr)==0)
                printf("invalid ip\n");
        else
                printf("valid ip\n");

        char ip_str[16];
        inet_ntop(AF_INET, &s.sin_addr,ip_str,16);
        printf("the entered ip %s\n", ip_str);

        return(0);
}
