#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n >= 1000 && n<=9999) cout<<"4 digit number";
    else cout<<"not a 4 digit number";
}
