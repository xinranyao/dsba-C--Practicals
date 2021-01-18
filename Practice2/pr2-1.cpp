//check if a point is inside the func
#include<iostream>
#include<cmath>

using namespace std;

//define my func
bool point_circle(int p1, int p2, int o1, int o2, int r){
double dist = sqrt((p1-o1)*(p1-o1)+(p2-o2)*(p2-o2));
if (dist <= r)
  return true;
else
  return false;

}

//func call
int main(){
  int p1,p2,o1,o2,r;
  cout << "x coordinate of the point: ";
  cin>>p1;
  cout << "y coordinate of the point: ";
  cin>>p2;
  cout << "x coordinate of the circle: ";
  cin>>o1;
  cout << "y coordinate of the circle: ";
  cin>>o2;
  cout << "radius of the circle: ";
  cin>>r;
  cout<<"is the point in the circle?";
  if(point_circle(p1,p2,o1,o2,r))
    cout<< "yes"<<endl;
  else
    cout <<"no"<<endl;

  return 0;
}

