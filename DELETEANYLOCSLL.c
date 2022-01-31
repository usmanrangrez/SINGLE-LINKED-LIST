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

void DAP()
{
    struct node*ptr=head;
    struct node*temp;
    int pos;
    printf("\nEnter node index you want to delete:\n");
    scanf("%d",&pos);

    if(pos==0)
    {
        head=head->next;
    }

    else
    {
    for(int i=0;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    temp=ptr->next;
    ptr->next=ptr->next->next;
    free(temp);
    }
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
    printf("\nEnter the number of nodes you want:\n");
    scanf("%d",&n);
    printf("enter the data:\n");
    for(int i=0;i<n;i++)
    {
        createL();
    }
    display();
    DAP();
    printf("\nNow after deleting specified index,list is:\n");
    display();

    return 0;
}