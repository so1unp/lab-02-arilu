#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>


int main(void){

    fork();
    sleep(10);
    printf("Hola \n");
    exit(EXIT_SUCCESS);

}