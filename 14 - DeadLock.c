#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <semaphore.h>
pthread_mutex_t l1, l2;
void *t1(){
	pthread_mutex_lock(&l1);
	sleep(1);//context switch
	pthread_mutex_lock(&l2);
}
void *t2(){
	pthread_mutex_lock(&l2);
	sleep(1);
	pthread_mutex_lock(&l2);
}
int main(){
	pthread_t thread1, thread2;
	
	// creating threads
	pthread_create(&thread1, NULL, &t1, NULL);
	pthread_create(&thread2, NULL, &t2, NULL);

		


	//execution of threads 
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	return 0;
}