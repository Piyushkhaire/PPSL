#include <iostream>
using namespace std;

void swap(int &a, int &b){
  int temp=a;
  a=b;
  b=temp;
}
int main (){
  int x, y;
  
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of y:";
  cin>>y;
  
  cout<<"\n Before Swapping:\n";
  cout<<"x="<<x<<",y="<<y<<endl;
  
  swap(x,y);
  cout<<"\nAfter swapping:\n";
  cout<<"x="<<x<<",y="<<y<<endl;
  return 0;
}