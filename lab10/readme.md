# INTRODUCTION  
 
 
 
### Queue is an abstract data structure, somewhat similar to stacks. Unlike stacks a queue is open at both its ends. One end is always used to insert data and the other is used to remove data. Queue follows first in first out methodology, the data item stored first will be accessed first. 
### A queue is container of a object that are inserted and removed accordingly to the first in first out principle. An excellent example of a queue is a line of students in the food court of the UC. In the queue only two operation are allowed enqueue and dequeue. 
## There are many functions declared in a linked list. Some of them are giving below: 
* Push: Push method is used to push an element at the starting of the stack represented by queue. This is similar to the add first method of queue and simply inserts the elements at the first position or top of the queue. 
* Pop:  Queue pop method pops an elementss from the stack represented by this list. Popping means remove and return the first elements of the list.   
* Size:  Queue size method is used to get the size of the linked list or the number of elements present in the queue. This method doesn’t take any parameter. This method returns the size or the number of elements present in the queue. 
* Empty:  Queue should have a “head” pointer. If the head is set to null then it have a zerolength queue. 
* Top:  In the standard library of classes, the data type queue is an adapter class, meaning that a queue is built on top of other data structure. The underlying structure for a queue could be an array, a vector, and array list, a linked list or any other collection. 
 
 

 
 
# USES OF QUEUE 
### Queue is used when things don’t have to be processed immediately, but have to be processed in first out order like Breadth First Search. This property of queue makes it also useful in following kind of scenarios.  
* When a resource is shared among multiple consumers, Example include CPU scheduling, Disk scheduling. 
* When data is transferred asynchronously between two processes. Example include TO, Buffer, popes, file Io, etc. 

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
