#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"enter principle: ";
    cin>>p;
    cout<<"enter rate: ";
    cin>>r;
    cout<<"enter time: ";
    cin>>t;
    float si = (p*r*t)/100;
    cout<<si<<endl;
}