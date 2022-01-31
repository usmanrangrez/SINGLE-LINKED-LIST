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

    else{
        tail->next=new;
        tail=new;
        new->next=NULL;
    }
}

void DE()
{
    struct node *ptr=head;
    while(ptr->next!=tail)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(ptr->next);
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
    printf("Enter the number of nodes you want:\n");
    scanf("%d",&n);
    printf("enter the data:\n");
    for(int i=0;i<n;i++)
    {
        createL();
    }
    display();
    DE();
    printf("\nNow after deleting last node,list is:\n");
    display();

    return 0;
}