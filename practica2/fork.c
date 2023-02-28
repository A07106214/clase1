#include <stdio.h>
#include <unistd.h>

int main(){

    printf("Solo el padre\n");

    int pid = fork();
    if(pid ==0){
        execl("/workspace/clase1/practica1/helloworld","ls",NULL);
        printf("Esta linea no debe correr");


    //    printf("Soy el proceso hijo y no se quien es mi padre\n");
    } else{
       printf("Soy el padre y mi hijo es %d\n",pid);
    }

    //printf("que pasa ahora\n");
    //fork();
    //printf("cuantos somos \n");


    return 0;
}