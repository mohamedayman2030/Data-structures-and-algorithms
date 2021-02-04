#include <iostream>
using namespace std;

template <typename T> class vectorClass
{
  T *arr;
  int capacity;
  int current;
  public:
  vectorClass(){
      arr= new T[1];
      capacity=1; //size of linkedlist
      current=0; // number of current elements
  }
  void push(T data){
      if(current==capacity){
          T *temp= new T[2*capacity];
          for (int i=0;i<capacity;i++) {
              temp[i]=arr[i];
          }
          delete[] arr;
          capacity*=2;
          arr=temp;
      }
      arr[current]=data;
      current++;
  }
  void push(T data, int index){
      if(index==capacity)
      push(data);
      else
      arr[index]=data;
  }
  void pop(){
      current--;
  }
  T get(int index){
      if(index<current)
      return arr[index];
  }
  int size(){
      return current;
  }
  int theCapacity(){
      return capacity;
  }
  void print(){
      for(int i=0;i<current;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;
  }
};

int main()
{
    vectorClass<int> v;
    v.push(5);
    v.push(7);
    v.push(8);
    v.push(9);
    v.pop();
    cout<<v.get(0)<<endl;
    v.print();
    cout<<v.size();

    return 0;
}
