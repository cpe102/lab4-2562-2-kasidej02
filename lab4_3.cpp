#include<iostream>
using namespace std;

int findDivisor(int x){
    int i=2;
    while(i>0){
        if(x%i==0){
            return i;
        }else{
            i++;
        }
    }
}

int main(){
int x;
cout<<"Enter input = ";
cin>>x;
cout<<"Answer is "<<findDivisor(x);
return 0;
}