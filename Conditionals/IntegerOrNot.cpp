#include<iostream>
using namespace std;
int main(){
    float x ;
    cout<<"Enter a real number: ";
    cin>>x;
    int y = (int)x;
    if(x == y) cout<<"integer";
    else cout<<"not an integer";
}
int main()