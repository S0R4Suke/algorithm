#include <stdio.h>
#define MAX 10

void insertion_sort(int *array);

int main(){
    int array[MAX] = {20,6,55,74,3,45,13,87,46,30};
    insertion_sort(array);
    return 0;
}

void insertion_sort(int *array){
    int i,j,h,tmp,k;
    for(i=0;i<MAX;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    for(h=1;h <= MAX/9;h = h*3+1);
    for(;h > 0; h/=3){
        for(i = 1;i<MAX;i++){
            j=i;
            while(j>=h && (array[j-h] > array[j]) ){
                tmp = array[j];
                array[j] = array[j-h];
                array[j-h] = tmp;
                j-=h;
            }
            for(k=0;k<MAX;k++){
                printf("%d ",array[k]);
            }
            printf("\n");
        }
    }
}
/*降順
#include <stdio.h>
#define MAX 10

void insertion_sort(int *array);

int main(){
    int array[MAX] = {20,6,55,74,3,45,13,87,46,30};
    insertion_sort(array);
    return 0;
}

void insertion_sort(int *array){
    int i,j,h,tmp,k;
    for(i=0;i<MAX;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    for(h=1;h <= MAX/9;h = h*3+1);
    for(;h > 0; h/=3){
        for(i = 1;i<MAX;i++){
            j=i;
            while(j>=h && (array[j-h] < array[j]) ){
                tmp = array[j];
                array[j] = array[j-h];
                array[j-h] = tmp;
                j-=h;
            }
            for(k=0;k<MAX;k++){
                printf("%d ",array[k]);
            }
            printf("\n");
        }
    }
}
*/

/*実行結果:
昇順：
20 6 55 74 3 45 13 87 46 30 
20 6 55 74 3 45 13 87 46 30
20 6 55 74 3 45 13 87 46 30
20 6 55 74 3 45 13 87 46 30
3 6 55 74 20 45 13 87 46 30 
3 6 55 74 20 45 13 87 46 30
3 6 13 74 20 45 55 87 46 30
3 6 13 74 20 45 55 87 46 30
3 6 13 74 20 45 55 87 46 30
3 6 13 74 20 30 55 87 46 45
3 6 13 74 20 30 55 87 46 45 
3 6 13 74 20 30 55 87 46 45
3 6 13 74 20 30 55 87 46 45
3 6 13 20 74 30 55 87 46 45
3 6 13 20 30 74 55 87 46 45
3 6 13 20 30 55 74 87 46 45
3 6 13 20 30 55 74 87 46 45 
3 6 13 20 30 46 55 74 87 45
3 6 13 20 30 45 46 55 74 87

降順：
20 6 55 74 3 45 13 87 46 30 
20 6 55 74 3 45 13 87 46 30
20 6 55 74 3 45 13 87 46 30
20 6 55 74 3 45 13 87 46 30
20 6 55 74 3 45 13 87 46 30
20 45 55 74 3 6 13 87 46 30
20 45 55 74 3 6 13 87 46 30 
20 45 55 87 3 6 13 74 46 30
46 45 55 87 20 6 13 74 3 30
46 45 55 87 20 30 13 74 3 6
46 45 55 87 20 30 13 74 3 6
55 46 45 87 20 30 13 74 3 6
87 55 46 45 20 30 13 74 3 6
87 55 46 45 20 30 13 74 3 6
87 55 46 45 30 20 13 74 3 6 
87 55 46 45 30 20 13 74 3 6
87 74 55 46 45 30 20 13 3 6
87 74 55 46 45 30 20 13 3 6
87 74 55 46 45 30 20 13 6 3
*/