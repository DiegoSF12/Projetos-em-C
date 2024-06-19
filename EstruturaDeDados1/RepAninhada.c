#include <stdio.h>

int main(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int x = 0; x < 3; x++){
                printf("%d %d %d\n", i,j,x);
            }
        }
    }
}