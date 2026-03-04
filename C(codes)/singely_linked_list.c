#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *insert_node(struct node *head, int data);
struct node *insert_at_the_begining(struct node *head, int data);
struct node *insert_at_the_end(struct node *head, int data);
struct node *insert_at_any_position(struct node *head, int data, int position);

void main(){

    int n,value,position;
    printf(" Enter how much linked list do you want:");
    scanf("%d",&n);
    struct node *head=NULL;
    for(int i=1; i<=n; i++){
        printf("Enter %d'nd Value:",i);
        scanf("%d",&value);
        head=insert_node(head,value);
        value=0;
    }
    printf("Do You want to insert a node at the begin(true:1 or false:0): ");
    int choice;
    scanf("%d",&choice);
    if(choice==1){
        int choice;
        printf("Enter Your Choice:");
        scanf("%d",&choice);
        head=insert_at_the_begining(head,choice);
    }

    printf("Do You want to insert a node at the end(true:1 or false:0): ");
    scanf("%d",&choice);
    if(choice==1){
        int choice;
        printf("Enter Your Choice:");
        scanf("%d",&choice);
        head=insert_at_the_end(head,choice);
    }    

    printf("Do You want to insert a node at any Position(true:1 or false:0): ");
    scanf("%d",&choice);
    if(choice==1){
        int choice;
        printf("Enter Your Choice:");
        scanf("%d",&choice);
        printf("Enter Your position:");
        scanf("%d",&position);
        head=insert_at_any_position(head,choice,position);
    }
    struct node *ptr1=head;
    printf("\n Final Outputs are:\n");
    while(ptr1 != NULL){
        printf("%d",ptr1->data);
        ptr1=ptr1->next;
        printf("\n");
    }

}

struct node *insert_node(struct node *head, int data){
    struct node *temp=malloc(sizeof(struct node));
    struct node *ptr1 = head;
    temp->data=data;
    temp->next=NULL;
    
    if(head == NULL){
        head=temp;
        return head;
    }else{
        while(ptr1->next!=NULL){
            ptr1=ptr1->next;
        }
        ptr1->next=temp;
        
    }
    return head;
}

struct node *insert_at_the_end(struct node *head, int data){
    struct node *temp=malloc(sizeof(struct node));
    struct node *ptr1=head;
    temp->data=data;
    temp->next=NULL;

    if(head == NULL){
        head=temp;
        return head;
    }else{
        while(ptr1->next != NULL){
            ptr1=ptr1->next;
        }
        ptr1->next=temp;
    }
    return head;
}

struct node *insert_at_the_begining(struct node *head, int data){
    struct node *temp=malloc(sizeof(struct node));
    struct node *ptr1=head;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return head;
    }else{
        temp->next=head;
        head=temp;
    }
    return head;
}

struct node *insert_at_any_position(struct node *head, int data,int position){
    struct node *temp=malloc(sizeof(struct node));
    struct node *ptr1=head;
    struct node *ptr2=head;
    temp->data=data;
    temp->next=NULL;

     if(head==NULL){
        head=temp;
        return head;
    }else{
        while(position != 1){
            ptr2=ptr1;
            ptr1=ptr1->next;
            position--;
        }
        temp->next=ptr1;
        ptr2->next=temp;

    }
    return head;
}