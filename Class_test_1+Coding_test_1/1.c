
#include<stdio.h>
int main()
{
    int i,X, size;
    int array[100];
    printf("Enter size of the array : ");
    scanf("%d",&size);
    printf("\nEnter a element of an array :\n");

    for(i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
    int reverse=1;
    printf("If you want to reverse then press key 1.\n");
    scanf("%d",&X);
    if(reverse==X){
            printf("Your reverse order remaining...\n");
        for(i=size-1;i>=0;i--)
        {
             printf("\n%d\n\t",array[i]);
        }

    }
    else{
      printf("\nThere is no press on key 1.\n");
    }

    return 0;
}
