#include <stdio.h>
#define MAX 10

void insertion_sort(int *array);

int main(){
    int array[MAX] = {20,6,55,74,3,45,13,87,46,30};
    insertion_sort(array);
    return 0;
}

void insertion_sort(int *array){
    int i,j,tmp,k;
    for(i=0;i<MAX;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i = 1;i<MAX;i++){
        j=i;
        while(j>=1 && (array[j-1] > array[j]) ){
            tmp = array[j];
            array[j] = array[j-1];
            array[j-1] = tmp;
            j--;
        }
        for(k=0;k<MAX;k++){
            printf("%d ",array[k]);
        }
        printf("\n");
    }
}
/*降順
void insertion_sort(int *array){
    int i,j,tmp,k;
    for(i=0;i<MAX;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i = 1;i<MAX;i++){
        j=i;
        while(j>=1 && (array[j-1] < array[j]) ){
            tmp = array[j];
            array[j] = array[j-1];
            array[j-1] = tmp;
            j--;
        }
        for(k=0;k<MAX;k++){
            printf("%d ",array[k]);
        }
        printf("\n");
    }
}
*/

/*実行結果:
昇順：
20 6 55 74 3 45 13 87 46 30 
6 20 55 74 3 45 13 87 46 30
6 20 55 74 3 45 13 87 46 30 
6 20 55 74 3 45 13 87 46 30 
3 6 20 55 74 45 13 87 46 30
3 6 20 45 55 74 13 87 46 30 
3 6 13 20 45 55 74 87 46 30
3 6 13 20 45 55 74 87 46 30 
3 6 13 20 45 46 55 74 87 30
3 6 13 20 30 45 46 55 74 87

降順：

20 6 55 74 3 45 13 87 46 30 
87 6 55 74 3 45 13 46 30 20
87 74 55 46 3 45 13 30 20 6
87 74 55 46 3 45 13 30 20 6 
87 74 55 46 3 45 13 30 20 6
87 74 55 46 45 30 13 20 6 3 
87 74 55 46 45 30 13 20 6 3
87 74 55 46 45 30 20 13 6 3
87 74 55 46 45 30 20 13 6 3
87 74 55 46 45 30 20 13 6 3
*/