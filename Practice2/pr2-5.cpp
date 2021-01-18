//exercise 5
#include<iostream>
using namespace std;

// This program returns the the n-th number in the Fibonacci sequence (non-recursive)
//Fibonacci, e.g. 0 1 1 2 3 5 8...

//define func
int n;
int fib(int k){
  int a=0, b=1,c,i;//a is the (n-2)-th element, b is (n-1)-th
  
  for(i=2;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
  }
  return a;
}


//fun call
int main(){
  cout<< "Please enter the ()th element you want? ";
  cin>>n;
  cout<< "Output: "<<fib(n);
  return 0;
}


