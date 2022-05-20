#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *threadfun(void *i)
{
	printf("From the function, the thread id = %d\n", pthread_self());
	int a = *(int*)i;
	while(1)
	{
		printf("%d\n",a);
		a++;
		sleep(1);
	}
}
int main()
{
	pthread_t t1;
	int i=0;
	//printf("Enter a number: ");
	//scanf("%d",&i);
	pthread_create(&t1,NULL,threadfun,(void *)&i);
	pthread_join(t1,NULL);

}
