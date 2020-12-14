
#include <iostream>

//using namespace std;
using std::cout;

struct node{
    int data;
    struct node* next;
};
struct node *head = NULL;
struct node *current = NULL;
struct node *prev = NULL;

 void insertAtLast(int data){
     struct node* link = (struct node*) malloc (sizeof(struct node));
     link -> data = data;
     link -> next = NULL;
     if(head == NULL){
         head = link;
         return;
     }
     current = head;
     while(current->next!= NULL){
         current = current->next;
     }
     current->next = link;
 }
 
 void printList(){
     struct node *ptr = head;
     
     while(ptr!=NULL){
         cout<<ptr->data<<" ";
         ptr = ptr->next;
     }
 }

 void deleteNodeFromList(int d){
    struct node *deleteNode = NULL;
    if(head == NULL){
        cout<<"empty list";
        return;
    }
    if(head->data == d){
        deleteNode = head;
        head = head->next;
        free(deleteNode);
        return;
    }
    
    
    current= head->next;
    prev = head;
    
    while(current != NULL){
        if(current->data == d){
            deleteNode = current;
            prev->next = current->next;
            free(deleteNode);
            return;
        }
        prev= current;
        current = current->next;
        
    }
    
 }
 

int main()
{
    insertAtLast(5);
    insertAtLast(4);
    insertAtLast(3);
    insertAtLast(2);
    insertAtLast(1);
    printList();
    deleteNodeFromList(3);
    cout<<"\nthe updated list is \n";
    printList();
}
