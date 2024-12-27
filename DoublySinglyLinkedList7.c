//7
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void insertatbeg()
{
    int item;
    struct node *ptr;
    ptr=malloc(sizeof(struct node));
    printf("Enter the item");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL)
    {
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
    }
    else
    {
        head->prev=ptr;
        ptr->next=head;
        head=ptr;
    }
}
void insertatlast()
{
    int item;
    struct node *ptr,*temp;
    ptr=malloc(sizeof(struct node));
    printf("Enter the elements");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL)
    {
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;

    }
    else
    {   temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        temp->next->prev=temp;
        ptr->next=NULL;
    }

       
}
void insertatpos()
{
    int item,pos;
    struct node *ptr,*temp;
    ptr=malloc(sizeof(struct node));
   printf("Enter the pos ");
   scanf("%d",&pos);

   
    if(pos<1)
    {
        printf("Insertion not possible");
        return ;
    }
    if(pos==1)
    {
        insertatbeg();
        return ;
    }
    temp=head;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
        if(temp==NULL)
        {
            printf("pos out of range");
            return ;
        }
        if(temp->next==NULL)
        {
            insertatlast();
            return ;
        }
        else
        {
            printf("Element to insert");
            scanf("%d",&item);
            ptr->data=item;
            temp->next->prev=ptr;
            ptr->next=temp->next;
            ptr->prev=temp;
            temp->next=ptr;

        }

    
}
void delbyval()
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr=head;
    int item;
    printf("Enter the element to delete");
    scanf("%d",&item);
    while(ptr!=NULL)
    {
        if(ptr->data==item)
        {
            if(ptr->prev!=NULL)
                ptr->prev->next=ptr->next;
            else
            head=ptr->next;
            if(ptr->next!=NULL)
                ptr->next->prev=ptr->prev;
            free(ptr);
            printf("Element deleted");
            return;

        }
        ptr=ptr->next;
    }
    printf("element not found\n");

}
void display()
{
    struct node *temp;
    temp=head;
    if(temp==NULL)
        printf("Element not found");
    else
    {
        printf("printing values\n");
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    int choice;
    printf("Doubly linked list operations");
    while(1)
    {
        printf("Choose the op");
        printf("1.insertatbeg(),2.insertatlast(),3.insertatpos(),4.deletebyval(),5.display(),6.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertatbeg();
                    break;
            case 2:insertatlast();
                    break;
             case 3:insertatpos() ;
                    break;

            case 4:delbyval();
                    break;       
            case 5:display();
                    break;
         
            case 6:printf("Exit");
                    exit(0);
                    break;
             default : printf("Invalid choice");

        }
    }
}

