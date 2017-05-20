#include <semaphore.h>
int buffer;
sem_t cheio,vazio;

void produtor(void *) {
    while (true) {
        item = 1;
        sem_wait(&vazio);
        buffer = item;
        sem_post(&cheio);
    }
}


void consumidor(void *) {
    while (true) {
        sem_wait(&cheio);
        item = 0;
        sem_post(&vazio);
        buffer = item;
    }
}


int main(){
    pthread_t prod, cons;
    sem_init(&cheio, 0, 0);
    sem_init(&vazio, 0, 1);
    pthread_create(&prod, NULL, produtor, NULL);
    pthread_create(&cons, NULL, consumidor, NULL);
    pthread_join(prod, NULL);
    pthread_join(cons, NULL);
}
