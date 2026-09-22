#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // if(n == 1) cout<<"Monday";
    // else if(n == 2) cout<<"Tuesday";
    //else if(n == 2) cout<<"Tuesday";
    //else if(n == 2) cout<<"Wednesday";
    //else if(n == 2) cout<<"Thursday";
    //else if(n == 2) cout<<"Friday";
    //else if(n == 2) cout<<"Saturday";
    // else if(n == 2) cout<<"Sunday";

    switch (n){
        case 1: cout<<"monday"; break;
        case 2: cout<<"Tuesday"; break;
        case 3: cout<<"wednesday"; break;
        case 4: cout<<"thursday"; break;
        case 5: cout<<"friday"; break;
        case 6: cout<<"saturday"; break;
        case 7: cout<<"sunday"; break;
        default : cout<<"invalid day";
    } 
}

