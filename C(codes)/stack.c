#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top=-1;

void push(int data);
void display();
int pop();
void size();
void isEmpty();
void isFull();
void main(){
    int value;
    push(2);
    push(4);
    push(6);
    push(1);
    // value=pop();
    // printf("deleted item is:%d\n",value);
    display();
    size();
}

void push(int data){
    if(top==MAX-1){
        printf("Stack is overflow\n");
        return;
    }else{
        top=top+1;
        stack_arr[top]=data;
    }
}

void display(){
    if(top==-1){
        printf("Stack is Empty\n");
        return;
    }else{
        for(int i=0; i<=top; i++){
        printf("%d\n",stack_arr[i]);
    }
    }
}

int pop(){
    int value;
    if(top==-1){
        printf("Stack is Empty\n");
        exit(1  );
    }else{
        value=stack_arr[top];
        top=top-1;
        return value;
    }
}

void isFull(){
    if(top==MAX-1){
        printf("The Stack is Full\n");
        return;
    }else{
        printf("The Stack is not Full\n");
        return;
    }
}

void isEmpty(){
    if(top==-1){
        printf("The Stack is Empty\n");
        return;
    }else{
        printf("The Stack is not Empty\n");
        return;
    }
}

void size(){
    int C=0;
    if(top==-1){
        printf("Stack is empty");
        return;
    }else{
        for(int i=0;i<=top;i++){
            C++;
        }
    }
    printf("The size of array is:%d",C);
}
