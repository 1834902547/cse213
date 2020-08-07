#include<stdio.h>
#include<stdlib.h>


typedef struct Node node;
struct Node{
int data;
node *next;
node *prev;
};
 node *head;
 void insert_back()
 {
     int value;
     printf("please enter the value of list :\n");
     scanf("%d",&value);
     node *new_node = (node *)malloc(sizeof(node));
     new_node->data = value;
     new_node->next = NULL;
     new_node->prev = NULL;

     if(head == NULL)
     {
        head = new_node;

     }
     else{
        node *temp = head;

        while(temp->next != NULL)

            {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
     }
 }
 void back()
 {
     node *temp = head;
     while(temp->next != NULL)
     {
        temp = temp->next;
     }
     printf("\nThe last value of this list is : %d\n",temp->data);
 }
 void delete_at()
 {
    int position,counter,i;
    scanf("%d",&position);
    node *temp,*previous;
    temp = head;
    if(position == 1){
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    else{
       for(i=1;i<position;i++)
      {
          previous = temp;
          temp = temp->next;

      }
      previous->next = temp->next;
      temp->next->prev = previous;
    }

 }
 void delete_value()
{
 node *temp,*previous;
  temp = head;
  int value,counter=1,i;
    scanf("%d",&value);
    while(temp->next !=NULL)
    {
       if(temp->data == value)
        {
         break;
       }
       counter+=1;
    }


    if(position == 1){
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    else{
       for(i=1;i<position;i++)
      {
          previous = temp;
          temp = temp->next;

      }
      previous->next = temp->next;
      temp->next->prev = previous;
    }

}
 void display()
{
    node *temp;
    temp=head;
    if(head == NULL)
    {
        printf("\nnothing to print");
    }
    else
    {
        printf("\n printing values ... \n");
        while(temp != NULL)
        {
            printf("\n%d \n", temp-> data);
            temp = temp -> next;
        }

    }

}

 int main()
{

    head=NULL;
    int choice;
    printf("\n******************Main Menu******************\n");
        printf("\n==============================================\n\n");
    while(choice!=5)
    {

        printf("\t1. insert_back\n");
        printf("\t2. back\n");
        printf("\t3. Display\n");
        printf("\t4. delete_at\n");
        printf("\t5. Exit\n");
        printf("\nplease!Enter your option:\n");

        scanf("%d",&choice);

        switch(choice)
        {
                case 1:
                    insert_back();
                    break;

                case 2:
                    back();
                    break;

                case 3:
                    display();

                    break;

                case 4:
                    delete_at();
                   break;

                case 5:
                    printf("\nExit Completed.\n");
                    break;

                default:
                    printf("\a\nEnter valid choice:\n");
        }
 }
}
