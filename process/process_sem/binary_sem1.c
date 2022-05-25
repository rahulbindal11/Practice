#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
/*
 P(semaphore s)
{
    if (s.value == 1) {
        s.value = 0;
    }
    else {
        // add the process to the waiting queue
        q.push(P)
        sleep();
    }
}
V(Semaphore s)
{
    if (s.q is empty) {
        s.value = 1;
    }
    else {
 
        // select a process from waiting queue
        Process p=q.pop();
        wakeup(p);
    }
}
*/

int main()
{
	pid_t pid1;
	pid1 = fork();
	
	if(pid1==0)
	{
		sleep(5);
		printf("i am child with delay of 5 sec and my child process pid=%d\n",getpid());

	}
	else
	{
		int pid2;
		printf("I am parent pro pid=%d\n",getpid());
		pid2 = wait(0);

		printf("parent system..child %d exicted/terminated normally\n",pid2);
		printf("parent process pro pid=%d\n",getpid());
	}
	return 0;
}
