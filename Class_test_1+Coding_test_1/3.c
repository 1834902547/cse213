#include<stdio.h>
int main()
{
    int *MAX;
    int max_2nd;
    int array[100] = {73, 80, 8, 40, 33, 88, 70, 2, 99, 1};
    int size = 10;

    MAX = &array[0];

    for(int i=0; i<size; i++)
        printf("%d ",*(MAX+i));

    printf("\n\n");

    for(int i=0; i<size; i++)
    {
        if(*(MAX+i)>*MAX)
        {
            max_2nd = *MAX;
            *MAX = *(MAX+i);
        }
        else if(*(MAX+i)>max_2nd && *(MAX+i)<*MAX)
            max_2nd = *(MAX+i);
    }

    printf("%d\n", max_2nd);

    return 0;
}

