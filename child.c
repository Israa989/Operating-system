#include <stdio.h>
#include<unistd.h>
#include<stdlib.h> 
int main(int argc,char *argv[])
{
int var1,var2,mult;
printf("   child.c:\n");
printf("      My PID of child.c: %d\n",(int) getpid());
sscanf(argv[1],"%d",&var1);
sscanf(argv[2],"%d",&var2);
mult=var1*var2;
printf("      The Result of the process of multiplying is: %d \n",mult);
return 0;
}

