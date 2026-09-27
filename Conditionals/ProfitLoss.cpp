#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price: ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price: ";
    cin>>sp;
    if(sp > cp) cout<<"profit is "<< sp-cp;
    if(cp > sp) cout<<"Loss is "<<cp-sp;
    else cout<<"No profit, no loss";
    // if(sp > cp) cout<<"profit";
    // if(sp < cp) cout<<"Loss";
    // if(sp == cp) cout<<"no profit, no loss";

}