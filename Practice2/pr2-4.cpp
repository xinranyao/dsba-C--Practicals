//exercise 4
#include<iostream>
using namespace std;

// the user input an integer n
// This program displays Floyd's triangle with n rows

int main(){
  int n, row, col, a = 1; //initialize
    
  cout << "Enter the number of rows of Floyd's triangle to print: "; 
  cin >> n;
  
  //print row by row, first row we put specific value in required colum(s), then go to next row
  for (row = 1; row <= n; row++)//access each row
  {
      for (col = 1; col <= row; col++){.  // access each colum    
          cout << a << " "; 
          a++; 
        }
        cout << endl;
  }
  return 0;
}