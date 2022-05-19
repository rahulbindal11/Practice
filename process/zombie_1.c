#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>

int main(){

	pid_t pid;
	char *msg;
	int n;
	
	printf("fork prgrm starting\n");
	pid=fork();
	switch(pid)
{
	case -1:
		perror("fork failed");
		exit(1);
	case 0:
		msg = "This is the child";
		n = 3;
		break;
	default:
		msg = "This is the parent";
		n = 5;
		break;
}
}
