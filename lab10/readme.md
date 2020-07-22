## Priority Queue (Maximum)

### Push Function 
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
### POP Function 
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
### Top Function
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
### [Size Function](size) 
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
