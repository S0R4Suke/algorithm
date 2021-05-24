#include <stdio.h>
#define MAX 10
int partition(int *array,int left,int right);
void quick_sort_1(int *array,int left,int right);
void quick_sort(int *array,int n);

int main(){
    int array[MAX] = {20,6,55,74,3,45,13,87,46,30};
    for(int i=0;i<MAX;i++){
        printf("%d ",array[i]);
    }
    printf("\n");    
    quick_sort(array,MAX);
    return 0;
}

int partition(int *array,int left,int right){
    int i,j,pivot,tmp;
    i = left-1;
    j = right;
    pivot = array[right];
    while(1){
        while(array[++i] < pivot);
        while(i < --j && pivot < array[j]);
        if(i >= j)break;
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
        for(int i=0;i<MAX;i++){
            printf("%d ",array[i]);
        }
        printf("\n");
    }
    tmp = array[i];
    array[i] = array[right];
    array[right] = tmp;
    return i;
}

void quick_sort_1(int *array,int left,int right){
    int v;
    if(left >= right){
        return;
    }
    v = partition(array,left,right);
    quick_sort_1(array,left,v-1);
    quick_sort_1(array,v+1,right);
}

void quick_sort(int *array,int n){
    quick_sort_1(array,0,n-1);
    for(int i=0;i<MAX;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

/*　降順
#include <stdio.h>
#define MAX 10
int partition(int *array,int left,int right);
void quick_sort_1(int *array,int left,int right);
void quick_sort(int *array,int n);

int main(){
    int array[MAX] = {20,6,55,74,3,45,13,87,46,30};
    for(int i=0;i<MAX;i++){
        printf("%d ",array[i]);
    }
    printf("\n");    
    quick_sort(array,MAX);
    return 0;
}

int partition(int *array,int left,int right){
    int i,j,pivot,tmp;
    i = left-1;
    j = right;
    pivot = array[right];
    while(1){
        while(array[++i] > pivot);
        while(i < --j && pivot > array[j]);
        if(i >= j)break;
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
        for(int i=0;i<MAX;i++){
            printf("%d ",array[i]);
        }
        printf("\n");
    }
    tmp = array[i];
    array[i] = array[right];
    array[right] = tmp;
    return i;
}

void quick_sort_1(int *array,int left,int right){
    int v;
    if(left >= right){
        return;
    }
    v = partition(array,left,right);
    quick_sort_1(array,left,v-1);
    quick_sort_1(array,v+1,right);
}

void quick_sort(int *array,int n){
    quick_sort_1(array,0,n-1);
    for(int i=0;i<MAX;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
*/

/*実行結果:
昇順：
20 6 55 74 3 45 13 87 46 30 
20 6 13 74 3 45 55 87 46 30
20 6 13 3 74 45 55 87 46 30
3 6 13 20 30 45 55 46 87 74
3 6 13 20 30 45 46 55 74 87

降順：
20 6 55 74 3 45 13 87 46 30
46 6 55 74 3 45 13 87 20 30
46 87 55 74 3 45 13 6 20 30
46 87 55 74 45 3 13 6 20 30
87 46 55 74 45 30 13 6 20 3
87 74 55 46 45 30 20 13 6 3

*/
