int buffer[1];
sem_t cheio,vazio;

void produtor (void*){
    while(){
        item = produceitem();
        sem_wait(&vazio);
        putitemintobuffer(item)
    }


}
