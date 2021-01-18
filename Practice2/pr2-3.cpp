//exercise 3
#include<iostream>
#include<cmath>
using namespace std;

// This program swaps the value of two interger numbers user input

//declare fun
void swap(int* a, int* b);

int main(){
  int a=0, b=0;//initialize
  cout<<"enter two intergers ";
  cin>> a >> b;
  cout << "Before swapping" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;


  //func call
  swap (&a, &b);

  cout << "After swapping" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  return 0;
}


//define func
void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
