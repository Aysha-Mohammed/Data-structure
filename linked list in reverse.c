#include<stdio.h>
int main()
{
    struct node{
    int data;
    struct node *next,*prev;
    };
    struct node *head,*newnode,*temp;
    head=0;
    int input;
    printf("do you want to create a doubly linked list\n if yes type 1\n");
    scanf("%d",&input);
    while(input){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    if(head==0){
    head=temp=newnode;
    }
    else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
    }
    printf("do you want to continue?(0/1): ");
    scanf("%d",&input);
    }
   
    printf("doubly linked list in reverse: ");
    while(temp!=head){
    printf("%d ",temp->data);
    temp=temp->prev;
    }
    printf("%d",head->data); 
    }
