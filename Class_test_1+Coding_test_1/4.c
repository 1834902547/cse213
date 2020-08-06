#include<stdio.h>
int main()
{
    int *p;
    int i, X, location;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int tag = 0;
    printf("You have element 1 to 10.\n");
    printf("Enter your choice value.\n");
    scanf("%d",&X);

    p = &array[0];
    int found=0;
    for(i=0; i<size; i++)
    {
        if(array[i]==X)
        {
           found=1;
            break;
        }

    }
if(found==1){
    printf("\nValue is found :%d\n",X);
}
else{
    printf("\nvalue is not found :%d\n",X);
}
    return 0;
}

