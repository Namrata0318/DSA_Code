#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n >= 100){
        if(n <= 999) cout<<"3 digit number";
        else cout<<"not a 3 digit number";
    }
    else cout<<"not a 3 digit number";
}