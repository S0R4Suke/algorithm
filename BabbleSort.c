#include <stdio.h>
#define MAX 10

void bubble_sort(int *array);

int main(){
    int array[MAX] = {20,6,55,74,3,45,13,87,46,30};
    bubble_sort(array);
    return 0;
}

void bubble_sort(int *array){
    int i,j,tmp;
    for(i = 0;i<MAX-1;i++){
        int x;
        for(x = 0;x < MAX;x++){
            printf("%d ",array[x]);
        }
        printf("\n");
        for(j = MAX-1;j>i;j--){
            if(array[i]<array[j]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    int x;
    for(x = 0;x < MAX;x++){
        printf("%d ",array[x]);
    }
    printf("\n");
}
/*降順
void bubble_sort(int *array){
    int i,j,tmp;
    for(i = 0;i<MAX-1;i++){
        int x;
        for(x = 0;x < MAX;x++){
            printf("%d ",array[x]);
        }
        printf("\n");
        for(j = MAX-1;j>i;j--){
            if(array[i]<array[j]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    int x;
    for(x = 0;x < MAX;x++){
        printf("%d ",array[x]);
    }
    printf("\n");
}
*/
/*実行結果
昇順：
20 6 55 74 3 45 13 87 46 30 
3 6 55 74 13 45 20 87 46 30
3 6 55 74 13 45 20 87 46 30 
3 6 13 74 20 45 30 87 46 55
3 6 13 20 30 45 46 87 55 74
3 6 13 20 30 45 46 87 55 74 
3 6 13 20 30 45 46 87 55 74
3 6 13 20 30 45 46 87 55 74
3 6 13 20 30 45 46 55 74 87
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