#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}*head=NULL,*tail=NULL;

void createL()
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
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

void IAP()
{
    int val;
    int pos;
    printf("\nEnter the data to be inserted at any position:\n");
    scanf("%d",&val);
    printf("Enter the index where you want to insert this:\n");
    scanf("%d",&pos);

    struct node *new=(struct node*)malloc(sizeof(struct node));
    struct node *ptr=head;
    

    if(pos==0)
    {
        new->data=val;
        new->next=head;
        head=new;
    }

    else 
    {
        for(int i=0;i<pos-1;i++)
        {
            ptr=ptr->next;
        }

        new->data=val;
        new->next=ptr->next;
        ptr->next=new;
    }   
}

void display()
{
    struct node*ptr=head;

    printf("List is:\n");
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
    IAP();
    display();

    return 0;
}