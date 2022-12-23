#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
  int ar[2],n;
  char buffer[200];
  pid_t p;
  pipe(ar);
  p=fork();
  if(p>0)
  {
      printf("process value to child");
      write(ar[1],"hello\n",6);
  }
  else{
      printf("child recieved data\n");
      n=read(ar[0],buffer,200);
      write(1,buffer,n);
  }
    return 0;
}
