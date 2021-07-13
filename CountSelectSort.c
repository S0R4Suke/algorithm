#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 200000

void shuffle(int *array);
void print(int *array);
void selection_sort(int *array);

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
    selection_sort(array);
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

void selection_sort(int *array){
    int i,j,tmp,lowest,lowkey;
    for(i = 0;i < N-1;i++){
        lowest = i;
        lowkey = array[i];
        for(j = i+1;j < N;j++)
            if(array[j]<lowkey){
                lowest = j;
                lowkey = array[j];
            }
            tmp = array[i];
            array[i] = array[lowest];
            array[lowest] = tmp;
    }
}