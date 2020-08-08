#include<stdio.h>
#include<limits.h>
int main(){
    int a[10] = {3, 6, 4, 9, 7, 1, 2, 8, 10, 5};
    int size = 10, capacity = 10;
    int i, min, second_min;

    int *ptr;

    ptr = a;

    min = INT_MAX;
    second_min = INT_MAX;
    for(i=0; i<size; i++){
        if(*(ptr + i) < min){
            second_min = min;
            min = *(ptr + i);
        }
        else if(*(ptr + i) < second_min && *(ptr + i) > min){
            second_min = *(ptr + i);
        }
    }
    printf("%d\n", second_min);

    return 0;
}
