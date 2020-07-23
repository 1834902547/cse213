# Design a Double Way Non Circular Linked List
## Structure of Linked List
```c
#include<stdio.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
```
## Main Menu
```c
 head=NULL;
    int choice;
    printf("\n******************Main Menu******************\n");
        printf("\n==============================================\n\n");
    while(choice!=6)
    {

        printf("\t1. PUSH\n");
        printf("\t2. POP\n");
        printf("\t3. TOP\n");
        printf("\t4. SIZE\n");
        printf("\t5. Display\n");
        printf("\t6. Exit\n");
        printf("\nplease!Enter your option:\n");

        scanf("%d",&choice);

        switch(choice)
        {
                case 1:

                    push();

                    break;
                case 2:
                    pop();

                    break;
                case 3:
                    top();
                    break;
                case 4:
                    size();
                    break;
                case 5:
                   display();
                   break;
                case 6:
                    printf("\nExit Completed.\n");
                    break;
                default:
                    printf("\a\nEnter valid choice:\n");
        }
 ```
## Main Function 
```c
int main()
{

    head=NULL;
    //printf("Those are the value of queue: ");
    push (12);
    push (25);
    push (26);
    push (22);
    push (32);
    push (45);
    printf("The ultimate Queue is:\n");
    display();
    printf("After Pop the ultimate Queue is:\n");
    pop();
    display();
    top();
    size();
}
```
## Check List is Empty Or Not:
```c
Node *new_node = head;
  if(head==NULL)
    {
        printf("There is no value in the list to pop\n");
    }
```
## DISPLAY
```c
void display()
{
    if(head==NULL)
    {
        printf("There is no element in Queue");
    }
    else
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
```
## PUSH
```c
void push(int value)
{
    Node *new_node=(Node*)malloc(sizeof(Node));
    new_node->data=value;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        Node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }

}
```
## POP
```c
void pop()
{
    if(head==NULL)
    {
        printf("There is no value in the list to pop\n");
    }
    else
    {
        Node *temp=head;
        head=head->next;
        free (temp);
    }
}
```
## TOP
```c
void top()
{
    if(head==NULL)
    {
        printf("There is no value here");
    }
    else
    {
        printf("Top value is %d\n",head->data);
    }
    /*else{
       Node *temp=head;
       while(temp->next!=NULL){
           temp=temp->next;
       }
       printf("The top value is %d\n",temp->data);
    }*/
}
```
## Linked List Size
```c
void size()
{
    if(head==NULL)
    {
        printf("size is 00");
    }
    else
    {
        Node *temp=head;
        int count=1;
        while(temp->next!=NULL)
        {
            count+=1;
            temp=temp->next;
        }
        printf("Queue size is %d\n",count);
    }
}
```
