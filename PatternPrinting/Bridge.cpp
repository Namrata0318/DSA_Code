#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    //first row (2n-1 stars)
    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    // 1 loop me 3 loop
    n--;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){ //stars (hori. flipped triangle)
            cout<<"* ";
        }
        for(int j=1;j<=2*i-1;j++){ //spaces (odd triangle)
            cout<<"  ";
        }
        for(int j=1;j<=n+1-i;j++){ //stares (hori. flipped triangle)
            cout<<"* ";
        }
        cout<<endl;
    }
}