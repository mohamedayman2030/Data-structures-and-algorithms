#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;

void push(int data){
    struct node *link = (struct node *) malloc (sizeof(struct node));
    link->data=data;
    link->next=top;
    top=link;
}

void pop(){
    struct node *delete_node = top;
    
    if(top==NULL)
    return;
    
    top = top->next;
    
    free(delete_node);
}

int peek(){
    return top->data;
}

int isEmpty(){
    if(top==NULL)
    return 1;
}

void printStack(){
    struct node *ptr=top;
    if(ptr==NULL)
    return;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    
    push(5);
    push(7);
    push(8);
    push(10);
    cout<<peek()<<endl;
    pop();
    cout<<peek()<<endl;
    printStack();
}
