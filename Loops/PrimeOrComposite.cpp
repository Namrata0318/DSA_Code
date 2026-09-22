#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    bool flag = false;  //false means prime
    for(int i=2; i<=n-1; i++){
        if(n%i ==0){
            flag = true;
            break;
        }
    }
    if(n == 1) cout<<"neither prime norcomposite";
    else if(flag == true) cout<<"composite number";
    else cout<<"prime numbers";
} 