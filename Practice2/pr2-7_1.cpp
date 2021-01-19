//exercise 7
#include<iostream>
using namespace std;

// This program writes a recursive function calculating a^n. (a: interger; n: nonnegative integer)

//track the recursive
int i;

//delcare 
int cal_power(int, int);

//func call
int main(){
  i = 0;
  int a, n, result;
  cout << "Enter an interger: ";
  cin >> a;
  cout << "Enter a nonnegative integer: ";
  cin >> n;

  result = cal_power(a, n);
  cout<< a << "^"<<n<<"="<< result<<endl;
  cout<<"the recursive function has been called "<< i<<" times"<< endl;

  return 0;
}


//define function
int cal_power(int a, int n){
  i=i+1;
  if (n !=0){
    return (a*cal_power(a,n-1));
  }
  return 1;
  
}

// conclusion: the number of recursive calls = n + 1