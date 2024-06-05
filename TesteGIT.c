#include <stdio.h>
#include <stdlib.h>

int main(){
    char *ptr;
    ptr = (char*) malloc (sizeof(char) * 40);
    printf("Ponteiro ptr: %p", (void*)ptr);
    return 0;

}