#include <stdio.h>
#include<unistd.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<string.h>

int main()
{
    void *shared_mem;
    char buffer[100];
    int shm_id=shmget((key_t)1002,1024,0666| IPC_CREAT);
    printf("key of shared memory is %d\n ",shm_id);
    shared_mem=shmat(shm_id,NULL,0);
    printf("shared memory is %p \n",shared_mem);
    printf("enter the data\n");
    read(0,buffer,100);
    strcpy(shared_mem,buffer);
    printf("you wrote :%s",(char*)shared_mem);
    return 0;
}
