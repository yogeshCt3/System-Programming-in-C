/*
	Author » Yogesh K. Chhetri «	

*/


// gcc -pthread -std=c99 "15 - assignJob.c"	

// remove the [line a] and [line b] to see the difference 
				

#include <unistd.h>

#include <pthread.h>

#include <stdio.h>

pthread_mutex_t lock;

int count = 0;

void *assignJob(){

	pthread_mutex_lock(&lock); // [line a]

	
	++count;

	printf("Job %d started\n", count);

	
	sleep(2);	// context switching

	
	printf("Job %d ended\n", count);

	pthread_mutex_unlock(&lock);	// [line b]


}

int main(){

	pthread_t thread[10];
	
	for(int i = 0; i < 10 ; i++){

		pthread_create(&thread[i], NULL, &assignJob, NULL);

	}


	for(int i = 0 ; i < 10 ; i++){

		pthread_join(thread[i], NULL);

	}


	return 0;

}
