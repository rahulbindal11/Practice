#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <semaphore.h>


static int i;
sem_t sem_var;

void *print_even(void *i)
{
	
	int a = *(int*)i;
	
	for (int x=1; x<=a; x++)
	if(x%2==0)
	{
		//sem_wait(&sem_var);
			
		printf("EVEN : %d\n",x);
		
		//sem_post(&sem_var);
		sleep(1);
	//delay(2000);
	}    

    return 0;
}

void *print_odd(void *i)
{
	
	int a = *(int*) i;
	for (int x=1; x<=a; x++)
	if(x%2!=0)
	{
		
		
		//sleep(1);
		printf("ODD : %d\n",x);
		
		
		//sem_post(&sem_var);
		sleep(1);
		//sem_wait(&sem_var);
		

	}    

    return 0;
}

int main(void)
{
    sem_init(&sem_var, 0, 0);
    pthread_t thread1, thread2;
    printf("Enter a number: ");
    scanf("%d",&i);
    pthread_create(&thread2, NULL, print_even, (void *)&i);
    pthread_create(&thread1, NULL, print_odd, (void *)&i);
 
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    sem_destroy(&sem_var);
    return 0;
}
