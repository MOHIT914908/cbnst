#include<stdio.h>
#include<unistd.h>
int main()
{
    char *path1="/bin/ls";
    char *path2="/bin/date";
    int pid=fork();
    if(pid>0)
    {
        execl(path1,path1,NULL);
    }
    else{
        execl(path2,path2,NULL);
    }
    return 0;
}
