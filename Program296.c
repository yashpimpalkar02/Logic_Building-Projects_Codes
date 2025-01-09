#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
    int fd = 0, iRet = 0; 

    printf("Enter the name of the file that you want to open from the current directory\n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open %s file\n", FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n", FileName, fd);

        iRet = read(fd, Arr,10);

        printf("%d bytes gets successfully written into the file\n", iRet);

        printf("Data from file is : %s\n", Arr);

        close(fd);
    }

    return 0;
}
