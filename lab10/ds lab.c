#include<stdio.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
Node *head;
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
