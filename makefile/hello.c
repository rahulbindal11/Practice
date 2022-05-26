#include<stdio.h>
#include<unistd.h>
#include"header.h"

void hello()
{
	printf("\n i m hello function\n");
	printf("pid of hello is %d\n",getpid());
}
