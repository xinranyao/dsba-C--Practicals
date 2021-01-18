//exercise 6
#include<iostream>
using namespace std;

// This program returns the the n-th number in the Fibonacci sequence (recursive)
//Fibonacci, e.g. 0 1 1 2 3 5 8...

//track the recursive
int i;
//define func

int fib(int n){
  i = i+1;
  if(n==0||n==1)
    return n;
    
  return fib(n-1)+fib(n-2);
}
//using a global variable to keep track of the number of recursive calls



//func call
int main(){
  i=0;
  int n;
  cout<< "Please enter the ()th element you want? ";
  cin>>n;
  cout<< "Output: "<<fib(n-1)<<endl;
  cout<<"the recursive function has been called "<< i<<" times"<< endl;
  return 0;
}