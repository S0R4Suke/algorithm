#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 200000
#define N_ELEMENTS 1000000

int workspace[N_ELEMENTS];

void shuffle(int *array);
void print(int *array);
void after_print();
void merge_sort(int *array,int low,int high);

int main(){
    int array[N] = {0};

    for(int i=0;i<N;i++){
        array[i] = i;
    }
    print(array);

    shuffle(array);
    print(array);

    int a = N + 1;

    clock_t c_start,c_end;
    c_start = clock();

    time_t start_time,end_time;
    start_time = time(NULL);
    
    merge_sort(array,0,a);
   
    // printf("%d\n",end_time-start_time);
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

void merge_sort(int *array,int low,int high){
    int mid,i,j,k;

    if(low >= high){
        return;
    }

    mid = (low + high)/2;

    merge_sort(array,low,mid);
    merge_sort(array,mid+1,high);

    for(i = low;i <= mid;i++){
        workspace[i] = array[i];
    }
    for(i = mid + 1,j = high;i <= high;i++,j--){
        workspace[i] = array[j];
    }

    i=low;
    j=high;

    for(k = low;k <= high;k++){
        if(workspace[i] <= workspace[j]){
            array[k] = workspace[i++];
        }else{
            array[k] = workspace[j--];
        }
    }
}