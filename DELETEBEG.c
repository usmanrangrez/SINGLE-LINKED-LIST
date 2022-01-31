#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
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

void DB()
{
    struct node*ptr=head;
    head=head->next;
    ptr->next=NULL;
    free(ptr);
}

void display()
{
    struct node*ptr=head;

    printf("Data is:\n");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    int n;
    printf("Enter the nuumber of nodes you want:\n");
    scanf("%d",&n);
    printf("Enter data:\n");
    for(int i=0;i<n;i++)
    {
        createL();
    }
    display();
    DB();
    printf("\nAfter Deletion of first node list is:\n");
    display();

    return 0;
}