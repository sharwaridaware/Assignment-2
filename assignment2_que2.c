#include<stdio.h>
#include<unistd.h>

int main()
{
int pid1, pid2;

pid1 = fork();
pid2 = fork();

if(pid1==0)
	{
	 printf("Child 1 is started: %d\n", getpid());
	 execl("/bin/ls", "ls", "-lh", 0);	
	}
else if(pid2==0)
	{
	 printf("Child 2 started: %d\n", getpid());
	 printf("Parent PID of Child 2: %d\n", getppid());
	 //execl("/home/ameysystem/static_main", "./static_main", 0);	
	}
else
	{
 	 //sleep(3);
	 printf("Parent PID\n");
	 printf("Parent PID: %d\n",getpid());	
	}

while(1);
return(0);
}
