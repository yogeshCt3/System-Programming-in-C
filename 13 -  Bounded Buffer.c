#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <semaphore.h>
sem_t full, empty, mutex;
void *produce(){
	sem_wait(&empty);
	sem_wait(&mutex);
	printf("PRODUCING\n");
	sem_post(&mutex);
	sem_post(&full);
}
void *consume(){
	sem_wait(&full);
	sem_wait(&mutex);
	printf("CONSUMIG\n");
	sem_post(&mutex);
	sem_post(&empty);
}
int main(){
	sem_init(&full, 0, 0);
	sem_init(&empty, 0, 5);
	sem_init(&mutex, 0, 1);



	pthread_t thread1, thread2;
	
	// creating threads
	pthread_create(&thread1, NULL, &produce, NULL);
	pthread_create(&thread1, NULL, &produce, NULL);
	pthread_create(&thread1, NULL, &produce, NULL);
	pthread_create(&thread1, NULL, &produce, NULL);
	pthread_create(&thread1, NULL, &produce, NULL);
	pthread_create(&thread1, NULL, &produce, NULL);
	pthread_create(&thread1, NULL, &produce, NULL);
	pthread_create(&thread1, NULL, &produce, NULL);
	pthread_create(&thread1, NULL, &produce, NULL);
	pthread_create(&thread1, NULL, &produce, NULL);

	pthread_create(&thread2, NULL, &consume, NULL);
	pthread_create(&thread2, NULL, &consume, NULL);
	pthread_create(&thread2, NULL, &consume, NULL);
	pthread_create(&thread2, NULL, &consume, NULL);
	pthread_create(&thread2, NULL, &consume, NULL);

		


	//execution of threads 
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	return 0;
}