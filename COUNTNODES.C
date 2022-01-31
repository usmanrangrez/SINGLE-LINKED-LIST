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

int main()
{
    int n;
    printf("Enter the number of data you want to insert:\n");
    scanf("%d",&n);

    printf("Enter data:\n");
    for(int i=0;i<n;i++)
    {
        createL();
    }

    int count=0;
    struct node*ptr=head;

    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }

    printf("No of nodes is %d",count);

    return 0;
}