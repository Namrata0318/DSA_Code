#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n%5==0 and n%3==0) cout<<"Namrata";
    else if(n%3==0) cout<<"Shraddha";
    else if(n%5==0) cout<<"Rubi";
    else cout<<"Vandana";

    //if(n%5!=0 and n%3!=0) cout<<"Vandana";
    //if(n%5==0 and n%3!=0) cout<<"Rubi";
    //if(n%5!=0 and n%3==0) cout<<"Shraddha";
    //if(n%5==0 and n%3==0) cout<<"Namrata";
}