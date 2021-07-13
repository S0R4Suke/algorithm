#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 200000

void insertion_sort(int *array);
void shuffle(int *array);
void print(int *array);

int main(){
    int array[N] = {0};
    for(int i=0;i<N;i++){
        array[i] = i;
    }
    print(array);

    shuffle(array);
    print(array);

    clock_t c_start,c_end;
    c_start = clock();
    insertion_sort(array);
    c_end = clock();
    printf("%f\n",(double)(c_end - c_start)/CLOCKS_PER_SEC);
    print(array);
    return 0;
}

void print(int *array){
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void shuffle(int *array){
    int i=N;
    while(i>1){
        int j = rand() % i;
        i--;
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}

void insertion_sort(int *array){
    int i,j,tmp,k;
    for(i = 1;i<N;i++){
        j=i;
        while(j>=1 && (array[j-1] > array[j]) ){
            tmp = array[j];
            array[j] = array[j-1];
            array[j-1] = tmp;
            j--;
        }
    }
}