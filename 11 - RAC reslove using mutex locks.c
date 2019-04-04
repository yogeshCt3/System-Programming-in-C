#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
int var = 1;
pthread_mutex_t lock;
void *increment(){
	pthread_mutex_lock(&lock);
	printf("Inside %s()\n", __func__);
	int reg_a = var;
	reg_a = reg_a + 1;
	sleep(5);    // to simulate context switching
	var = reg_a;
	pthread_mutex_unlock(&lock);	
}

void *decrement(){
	pthread_mutex_lock(&lock);
	printf("Inside %s()\n", __func__);
	int reg_b = var;
	reg_b = reg_b - 1;
	var = reg_b;
	pthread_mutex_unlock(&lock);	
}

int main(){

	printf("[Before Execution] var : %d\n", var);

	pthread_t thread1, thread2;
	
	// creating threads
	pthread_create(&thread1, NULL, &increment, NULL);
	pthread_create(&thread2, NULL, &decrement, NULL);
		


	//execution of threads 
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	printf("[After Execution] var : %d\n", var);
	return 0;
}