#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <semaphore.h>
int s=1;

int psem(int s){
	while(1)
		{
		if(s>0)
		{
			s--;
			break;
		}
		else
		{
		return 0;
		}	
	}
}
int vsem(int s){
	while(1)
	{
		
		if(s<=0)
		{
		s++;
		break;
		}
		else {
		return 0;
		}
	}
}

int main(){
	
	psem(s);
	vsem(s);
	
}



