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
   
    temp=head;
    head=head->next;
    free(temp);
   
    temp=head;
    printf("linked list: ");
    while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
    }
}
