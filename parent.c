#include <stdio.h>
#include<sys/types.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
printf("\nSend two numbers using parent.c\nand implement the process of\nmultiplying them in child.c\n\n");
printf("parent.c: The two numbers are %s %s\n",argv[1],argv[2]);
printf("   My PID of parent.c: %d\n",(int) getpid());
pid_t pid= fork();
printf("\n   fork returned: %d\n",(int) pid);
if(pid<0)
     {
	perror("   Fork failed");
     }
if(pid==0)
     {
	printf("   We are in the child process\n");
	printf("   Calling child.c from child process\n");
	char *args[] = {"./child", argv[1], argv[2], NULL};
	execv("./child", args);
     }
else
     {
	printf("\n   We are in the parent process\n");
     }
return 0;
}

