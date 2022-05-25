// C Program for Message Queue (Reader Process)
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/time.h>
#include <semaphore.h>

#define MAX 10


//sem_t sem_var;
struct mesg_buffer {
	long mesg_type;
	char mesg_text[100];
} message;

int main()
{
	//sem_init(&sem_var, 0, 0);
	while(1)
	{
	
	key_t key;
	int msgid;

	key = ftok("progfile", 32);

	msgid = msgget(key, 0666 | IPC_CREAT);

	msgrcv(msgid, &message, sizeof(message), 1, 0);

	printf("Data Received is : %s \n",message.mesg_text);

	msgctl(msgid, IPC_RMID, NULL);
	
	// msg sending
	//sem_post(&sem_var);
	message.mesg_type = 1;

	printf("Write Data : ");
	fgets(message.mesg_text,MAX,stdin);

	msgsnd(msgid, &message, sizeof(message), 0);

	printf("Data send is : %s \n", message.mesg_text);
	//sem_wait(&sem_var);
	}
	//sem_destroy(&sem_var);
	return 0;
}

