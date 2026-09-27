#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    if(a+b > c and b+c > a and a+c > b)
        cout<<"valid triangle";
    else 
         cout<<"invalid triangle";
}