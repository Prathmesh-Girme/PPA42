#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{

    char Frame[20];
    int fd = 0;

    printf("please enter file name that you want to open\n");
    scanf("%s",Frame);

    fd = open(Frame,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to opn the file\n");
    }
    else
    {
        printf("File is sucessfully opened with FD %d\n",fd);
    }

    return 0;
    }
    
 
