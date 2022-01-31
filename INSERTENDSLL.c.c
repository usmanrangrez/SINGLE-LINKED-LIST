#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}*head=NULL,*tail=NULL;

void createL()
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    
    if(head==NULL)
    {
        head=new;
        tail=new;
    }
    
    else
    {
        tail->next=new;
        tail=new;
        new->next=NULL;
    }
}

void IE()
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    int y;
    printf("\nEnter the data you would like to insert at the end:\n");
    scanf("%d",&y);
    
    new->data=y;
    tail->next=new;
    tail=new;
    new->next=NULL;
}

void display()
{
    struct node*ptr=head;
    
    printf("Linked List:\n");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    int n;
    printf("Enter the number of nodes you want:\n");
    scanf("%d",&n);
    
    printf("Enter data:\n");
    for(int i=0;i<n;i++)
    {
        createL();
    }
    display();
    IE();
    display();
    
    return 0;
}