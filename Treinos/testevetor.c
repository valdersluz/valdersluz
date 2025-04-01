#include <stdio.h>
#include <stdlib.h>

float avg(float b[], int size);
int main(){
    float b[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float media = avg(b, 5);
    printf("Média: %.2f\n", media);
    //printf("Média: %.2f\n", avg(b, 5));
    return 0;
}

float avg(float b[], int size){
    int i;
    float sum = 0.0;

    for(i = 0; i < size; i++){
        sum += b[i];
    }
    return (sum / size);
}

