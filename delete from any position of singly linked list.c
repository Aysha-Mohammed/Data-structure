#include<stdio.h>
int main()
{
    struct node{
    int data;
    struct node *next;
    };
    struct node *head,*newnode,*nextnode,*temp;
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
    
   
    int pos;
    temp=head;
    printf("enter position: ");
    scanf("%d",&pos);
    if (pos==1)
    {
    head =head->next;
    free(temp);
    }
    else{
    for(int i=1;i<pos-1&&temp!=0;i++){
    temp=temp->next;
    }
    if(temp->next==0)
    {
    printf("invalid position\n");
    }
    else{
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
    }
    }
    
    
    temp=head;
    printf("linked list: ");
    while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
    }
}
