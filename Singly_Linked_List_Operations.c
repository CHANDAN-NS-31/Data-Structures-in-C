//6
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

void insertatbeg()
{
    int item;
    struct node *ptr ;
    ptr = malloc(sizeof(struct node));
    printf("Enter the item");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL)
    {
        ptr->next=NULL;
    }
    else{
        ptr->next=head;
    }
    head=ptr;
}
void insertatlast()
{
    int item;
    struct node *ptr,*temp;
    ptr = malloc(sizeof(struct node));
    printf("Enter item");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL)
    {
        ptr->next=NULL;
        head=ptr;
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
    }

}
void delbyval()
{
    int item;
    struct node *ptr,*temp;
    ptr=head;
    printf("Enter the element to delete");
    scanf("%d",&item);
    if(head==NULL)
    {
        printf("No element");
    }
    else if (ptr->next==NULL)
    {
        if(ptr->data==item)
    {    free(ptr);
        head=NULL;
        printf("item deleted");
    }
    else
        printf("Element not found");
    }
    else 
    {
        while( ptr->next!=NULL && ptr->next->data!=item)
        ptr=ptr->next;
        if(ptr->next==NULL)
        printf("Element not found");
        else
        {
            temp=ptr->next;
            ptr->next=ptr->next->next;
            free(temp);
            printf("element deleted");
        }

    }

}
void display()
{
    
    struct node *ptr;
     ptr=head;
    if(head==NULL)
    {printf("No elements");}
    else
    {  printf("Printing values");
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }

    }

}
int main()
{
     int choice;
    printf("singly linked list operations");
    while(1)
    {
        printf("Choose the op");
        printf("1.insertatbeg(),2.insertatlast(),3.deletebyval(),4.display,5.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertatbeg();
                    break;
            case 2:insertatlast();
                    break;
            case 3:delbyval();
                    break;
            case 4:display();
                    break;
            case 5:printf("Exit");
                    exit(0);
                    break;
             default : printf("Invalid choice");

        }
    }
}