#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

void Enqueue(int data){
    struct node *link = (struct node *) malloc (sizeof(struct node));
    link->data = data;
    link->next = NULL;
    if(front == NULL){
        front = link;
        rear = link;
        return;
    }
    rear -> next = link;
    rear = link;
}

void Dequeue(void){
    struct node *delete_node = front;
    if(front == NULL)
    return;
    front = front -> next;
    free(delete_node);
}

int peek(void){
    return front->data;
}
void printQueue(){
    struct node* ptr = front;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr -> next;
    }
}


int main()
{
    Enqueue(5);
    Enqueue(7);
    Enqueue(8);
    Enqueue(10);
    cout<<peek()<<endl;
    Dequeue();
    cout<<peek()<<endl;
    printQueue();
}
