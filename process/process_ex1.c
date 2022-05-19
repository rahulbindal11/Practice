#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void fork_example(){
	if(fork()==0)
	{
	printf("child process\n");
	}
	else
	{
	printf("parent process");
	}
}




int main()
{
	fork_example();
	return 0;
}


