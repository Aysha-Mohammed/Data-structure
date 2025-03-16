#include<stdio.h>
int main()
{
    struct node{
    int data;
    struct node *next;
    };
    struct node *head,*newnode,*temp;
    head=0;
    int input;
    printf("do you want to create a linked list\n if yes type 1\n");
    scanf("%d",&input);
    while(input){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
    head=temp=newnode;
    }
    else{
    temp->next=newnode;
    temp=newnode;
    }
    printf("do you want to continue?(0/1): ");
    scanf("%d",&input);
    }
    
    int value,y=0;
    printf("enter a search element: ");
    scanf("%d",&value);
    temp=head;
    while(temp!=0){
        if(temp->data==value)
        {
        y++;
        }
        temp=temp->next;
       }
       if(y==0)
       {
        printf("not found");
       }
       else{
        printf("found");
       }
    }
