#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Pre-Placement Activity";

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iRet = write(fd,Arr,22);
        printf("%d bytes get succesfully written into the file\n",iRet);

        close(fd);
    }

    return 0;
}