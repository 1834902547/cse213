#include<stdio.h>
void output();
int main(){
    int a[100];

    output();

    return 0;
}
void output(){
    int a[100];
    int i, size;

i = 0;
    while(scanf("%d", &a[i]) && a[i]!=-1){
        i++;
        if(i > 100){
            printf("OverFolw\n");
        }
    }
    size = i;

    for(i=size-1; i>=0; i--){
        printf("%d ", a[i]);
    }

}
