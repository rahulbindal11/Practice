#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *threadfun(void *i)
{
	sleep(1);
	int a = *(int*)i;
	for(int j=1;j<a;j++)
	{
		printf("%d\n",j);
	}
}
int main()
{
	pthread_t t1;
	int i;
	printf("Enter a number: ");
	scanf("%d",&i);
	pthread_create(&t1,NULL,threadfun,(void *)&i);
	pthread_join(t1,NULL);

}
