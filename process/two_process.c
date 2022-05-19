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
		//case 1:
		//perror("fork failed");
		//exit(1);
		case 0:
		msg="this is a child";
		n=5;
		break;
		default:
		msg="this is a parent";
		n=3;
		break;
	}
	
	for(; n>0;n--){
	puts(msg);
	sleep(1);
	}
	
	exit(0);
}
		
