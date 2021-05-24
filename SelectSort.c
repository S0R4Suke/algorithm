#include <stdio.h>
#define MAX 10

void selection_sort(int *array);

int main(){
    int array[MAX] = {20,6,55,74,3,45,13,87,46,30};
    int x;
    for(x = 0;x<MAX;x++){
        printf("%d ",array[x]);
    }
    printf("\n");
    selection_sort(array);
    return 0;
}

void selection_sort(int *array){
    int i,j,tmp,lowest,lowkey;
    for(i = 0;i < MAX-1;i++){
        lowest = i;
        lowkey = array[i];
        for(j = i+1;j < MAX;j++)
            if(array[j]<lowkey){
                lowest = j;
                lowkey = array[j];
            }
            tmp = array[i];
            array[i] = array[lowest];
            array[lowest] = tmp;
            int x;
            for(x = 0;x<MAX;x++){
                printf("%d ",array[x]);
            }
        printf("\n");
    }
}
/*降順
#include <stdio.h>
#define MAX 10

void selection_sort(int *array);

int main(){
    int array[MAX] = {20,6,55,74,3,45,13,87,46,30};
    int x;
    for(x = 0;x<MAX;x++){
        printf("%d ",array[x]);
    }
    printf("\n");
    selection_sort(array);
    return 0;
}

void selection_sort(int *array){
    int i,j,tmp,lowest,lowkey;
    for(i = 0;i < MAX-1;i++){
        lowest = i;
        lowkey = array[i];
        for(j = i+1;j < MAX;j++)
            if(array[j]>lowkey){
                lowest = j;
                lowkey = array[j];
            }
            tmp = array[i];
            array[i] = array[lowest];
            array[lowest] = tmp;
            int x;
            for(x = 0;x<MAX;x++){
                printf("%d ",array[x]);
            }
        printf("\n");
    }
}
*/

/*実行結果
昇順:
20 6 55 74 3 45 13 87 46 30
3 6 55 74 20 45 13 87 46 30
3 6 55 74 20 45 13 87 46 30
3 6 13 74 20 45 55 87 46 30
3 6 13 20 74 45 55 87 46 30
3 6 13 20 30 45 55 87 46 74
3 6 13 20 30 45 55 87 46 74
3 6 13 20 30 45 46 87 55 74
3 6 13 20 30 45 46 55 87 74
3 6 13 20 30 45 46 55 74 87

降順：
20 6 55 74 3 45 13 87 46 30 
87 6 55 74 3 45 13 20 46 30
87 74 55 6 3 45 13 20 46 30
87 74 55 6 3 45 13 20 46 30
87 74 55 46 3 45 13 20 6 30
87 74 55 46 45 3 13 20 6 30
87 74 55 46 45 30 13 20 6 3
87 74 55 46 45 30 20 13 6 3
87 74 55 46 45 30 20 13 6 3
87 74 55 46 45 30 20 13 6 3 
*/