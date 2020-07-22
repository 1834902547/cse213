## Delete Back and Check Underflow
```c
Node* delete_back(Node *temp)
{
    Node *head = temp, *last;
    if(temp)
    {
        if (head->next!=NULL)
        {
            while(temp->next)
            {
                last = temp;
                temp = temp->next;
            }
            free(temp);
            last->next = NULL;
        }
        else
        {
            free(temp) ;
            head = NULL;
        }
        return head;
    }
    else
        printf("Underflow Linked List");
    return head;
}
```
## Delete Front and Check Underflow
```c
Node* delete_front(Node *temp)
{
    if(temp){
        Node *new_head = NULL;
    new_head = temp->next;
    free(temp);
    return new_head;
    }
    else
        printf("Underflow Linked List");
    return temp;
}
```
## Delete Value (Check Underflow and Not Found)
```c
Node* delete_value(Node *temp, int key)
{
    if (temp)
    {
        Node *head = temp, *prev;
        while(temp)
        {
            if(temp->value == key)
            {
                if(head == temp)
                {
                    head = temp->next;
                    free(temp);
                    return head;
                }
                else
                {
                    prev->next = temp->next;
                    free(temp) ;
                    return head;
                }
            }
            prev = temp;
            temp = temp->next;
        }
        printf("Not Found\n");
        return head;
    }
    else
        printf("Underflow Linked List\n");
    return temp;
}
```
## Delete At (Check Underflow and index out of range)
```c
Node* delete_at(Node *temp, int pos)
{
    while(temp)
    {
        if(pos>4 || pos<1)
        {
            printf("Index out of range");
            return NULL;
        }
        else
        {
            if(pos==1)
            {
                Node *new_head = NULL;
                new_head = temp->next;
                free(temp);
                return new_head;
            }
            else
            {
                Node *head = temp;
                Node *prev, *next;
                int i=1;
                while(i<pos)
                {
                    prev = temp;
                    temp = temp->next;
                    i++;
                }
                prev->next = temp->next;
                free(temp) ;
                return head;
            }
        }
    }
    printf("Underflow Linked List\n");
    return NULL;
}
```
## Delete All / Clear Linked List
```c
Node* clear(Node *temp)
{
    Node *to_delete;
    while(temp)
        {
            to_delete = temp;
            temp = temp->next;
            free(to_delete);
        }
    return NULL;
}
```
