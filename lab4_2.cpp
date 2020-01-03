#include<iostream>

using namespace std;

float findDistance(float u,float a,float t){
  return u*t+(0.5*a)*t*t;
}
int main(){
  float u,a,t;
  cout<<"Enter u= ";
  cin>>u;
  cout<<"Enter a = ";
  cin>>a;
  cout<<"Enter t = ";
  cin>>t;
  cout<<"s = "<<findDistance(u,a,t);
  

  return 0;
  
}
