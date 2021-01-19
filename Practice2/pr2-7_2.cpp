//exercise 7.2
#include<iostream>
using namespace std;

// This program writes a recursive function calculating a^n. (a: interger; n: nonnegative integer)

//track the recursive
int i;

//delcare 
int al_cal_power(int, int);

//func call
int main(){
  i = 0;
  int a, n, result;
  cout << "Enter an interger: ";
  cin >> a;
  cout << "Enter a nonnegative integer: ";
  cin >> n;

  result = al_cal_power(a, n);
  cout<< a << "^" <<n<<"="<< result<<endl;
  cout<<"the recursive function has been called "<< i<<" times"<< endl;
  return 0;
}


//define function
int al_cal_power(int a, int n){
  i = i+1;
  if (n==0)
    return 1;
  else if (n%2 == 0){
    return al_cal_power(a,n/2)* al_cal_power(a,n/2);
  } 
  else return a*al_cal_power(a,n/2)* al_cal_power(a,n/2);
  
}

// concusion: the number of recursive calls is logrithmically related to n.