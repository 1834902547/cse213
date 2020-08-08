
#include<stdio.h>
#include<stdlib.h>


typedef struct Node node;
struct Node
{
    int data;
    node *next;
    node *prev;
};
node *head;
void insert_at(int value,int position)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    new_node->prev = NULL;
    node *temp = head;
    if(position == 1)
    {
        if(head == NULL)
        {
            head = new_node;

        }
        else
        {
            head->prev = new_node;
            new_node->next = head;
            head = new_node;
        }
        return ;
    }

    node *previous;
    for(int i=1; i<position; i++)
    {
        previous = temp;
        temp = temp->next;
    }
    new_node->next = previous->next;
    temp->prev = new_node;
    previous->next = new_node;
    new_node->prev = previous;


}
void insert_back(int value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(head == NULL)
    {
        head = new_node;

    }
    else
    {
        node *temp = head;

        while(temp->next != NULL)

        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
}
void delete_front()
{
    node *previous;
    if(head == NULL)
    {
        printf("\n There is no element\n");
    }
    else
    {
        previous = head;
        head = head -> next;
        head -> prev = NULL;
        free(previous);
        printf("\nNode Deleted\n");
    }
}
void display_reverse()
{
    node *temp;
    temp=head;
    if(head == NULL)
    {
        printf("\nnothing to print");
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        printf("Printing value reversely :\n");
        while(temp != NULL)
        {
            printf("%d ", temp-> data);
            temp = temp -> prev;
        }
        printf("\n");
    }

}
void merge()
{
    struct Node *split(struct Node *head);
    struct Node *merge(struct Node *first, struct Node *second)
    {
        if (!first)
            return second;

        if (!second)
            return first;
        if (first->data < second->data)
        {
            first->next = merge(first->next,second);
            first->next->prev = first;
            first->prev = NULL;
            return first;
        }
        else
        {
            second->next = merge(first,second->next);
            second->next->prev = second;
            second->prev = NULL;
            return second;
        }
    }
    struct Node *mergeSort(struct Node *head)
    {
        if (!head || !head->next)
            return head;
        struct Node *second = split(head);
        head = mergeSort(head);
        second = mergeSort(second);
        return merge(head,second);
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
    head= NULL;
    insert_back(28);
    insert_back(18);
    insert_at(14,1);
    insert_at(17,2);
    delete_front();
    display();
    display_reverse();
    printf("Merge the list\n");
    merge();
}
