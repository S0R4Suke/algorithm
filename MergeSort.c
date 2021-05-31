#include <stdio.h>
#define MAX_ELEMENTS 10000

void merge_sort(int *array,int low,int high);
int workspace[MAX_ELEMENTS];

int main(){
    int array[10] = {20,6,55,74,3,45,13,87,46,30};
    merge_sort(array,0,11);
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
void merge_sort(int *array,int low,int high){
    int mid,i,j,k;
    for(int i=0;i<10;i++){
        printf("%d ",workspace[i]);
    }
    printf("\n");
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