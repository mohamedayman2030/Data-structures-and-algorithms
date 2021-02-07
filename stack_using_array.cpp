#include <iostream>
#define MAX 1000
using namespace std;

class Stack{
  int top;
  public:
  int arr[MAX];
  Stack(){
      top=-1;
  }
  bool push(int x){
      if(top>=MAX-1){
          cout<<"stack overflow \n";
          return false;
      }
      else{
          arr[++top]=x;
          cout<<x<<" pushed to the stack \n";
          return true;
      }
  }
  int pop(){
      if(top<0){
          cout<<"Empty list \n";
          return 0;
      }
      else{
          int x=arr[top--];
          return x;
      }
  }
  int peek(){
      if(top<0){
          cout<<"Empty list \n";
          return 0;
      }
      else{
          int x=arr[top];
          return x;
      }
  }
  bool isEmpty(){
      if(top<0)
      return true;
  }
};

int main()
{
    class Stack s;
    s.push(5);
    s.push(7);
    s.push(8);
    s.push(10);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
}
