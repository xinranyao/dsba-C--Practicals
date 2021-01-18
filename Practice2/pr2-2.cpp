//exercise 2
#include<iostream>
#include<cmath>
using namespace std;

// This program displays the position of a body moving at a fixed interval of time

//define func interface
void position(double x0,double v0,double a0,double t0){
  cout<< "At time " << t0 << " the position is " << x0+v0*t0+0.5*a0*t0*t0<< endl;
  
}

int main(){
  double x=0.0,v=0.0,a=0.0,delt=0.0,t=0.0;//initialize
  int n=0;//initialize
  cout<<"enter the initial position, the speed and the acceleration: ";
  cin >>x>>v>>a;
  cout<<"how many times you want to display the position of the moving body? ";
  cin>>n;
  cout<<"how often (in seconds) you want to update the position of the moving object? ";
  cin>>delt;

  cout << "Acceleration: " << a << " Initial Speed: " << v << " Initial position: " << x << " Number of times: " << n << " Delta t: " << delt << endl;

  int i;
  for (i=1; i<=n; i++){
    position(x, v, a, t);
    t = t+delt;
  }
  return 0;
}

