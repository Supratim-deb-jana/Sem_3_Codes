#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
//functions prototype;
struct node *insert_node(struct node *head,int data);
struct node *insert_begin(struct node *head,int data);
struct node *insert_position(struct node *head,int data,int position);
struct node *insert_end(struct node *head,int data);

int main()
{
    //code to create doubly linked list
    int n,value;
    printf("Enter How many elements do you want:");
    scanf("%d",&n);
    struct node *head=NULL;

    //inserting n nodes
    for(int i=1;i<=n;i++){
        printf("Enter %d value:",i);
        scanf("%d",&value);
        //function call to insert node
        head = insert_node(head,value);
        value=0;
    }
    //insert a node at the begin of the doubly linked list
    head=insert_begin(head,2);
    //insert a node at a given position
    head=insert_position(head,34,2);
    head=insert_end(head,50);
    struct node *ptr=head;

    //printing the doubly linked list
    printf("The doubly linked list is:\n");
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }


    return 0;
}

//function to insert node at the end of doubly linked list

struct node *insert_node(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    struct node *ptr=head;
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return head;
        
    }else{
        while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    }
    

    return head;

}

struct node *insert_begin(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    struct node *ptr=head;
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return head;
    }else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    return head;
}

struct node *insert_position(struct node *head,int data,int position){
    struct node *temp=malloc(sizeof(struct node));
    struct node *ptr1=head;
    struct node *ptr2=head;
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return head;
    }else{
        while(position != 1){
            ptr1=ptr1->next;
            position--;
        }
        ptr2=ptr1->prev;
        temp->prev=ptr2;
        temp->next=ptr1;
        ptr2->next=temp;
        ptr1->prev=temp;
        
    }
    return head;
}

struct node *insert_end(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    struct node *ptr=head;
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    
    if(head==NULL){
        head=temp;
        return head;
    }else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        temp->prev=ptr;
        ptr->next=temp;
    }
    return head;
}