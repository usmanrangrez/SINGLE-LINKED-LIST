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

void IB()
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("\nEnter the data you want to insert in the beginning:\n");
    scanf("%d",&x);
    new->data=x;
    new->next=head;
    head=new;
}

void display()
{
    struct node*ptr=head;
    printf("Linked List is:\n");
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
    printf("Enter the data:\n");
    for(int i=0;i<n;i++)
    {
        createL();
    }
    display();
    IB();
    display();
    
    return 0;
}