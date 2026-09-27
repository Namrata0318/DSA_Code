#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age >= 18){
        cout<<"you can drive"<<endl;
        cout<<"but you need a driving liscence";
    }
    else cout<<"you cannot drive";
}