#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // // Method 1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-1;j++){
    //         cout<<"  ";
    //      }
    //      for(int j=1;j<=2*i-1;j++){
    //          cout<,"* ";
    //      }
    //      cout<<endl;
    // }


    // Method 2
    int nsp = n-1, nst = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<<=nsp;j++){ //spaces
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){ // stars
            cout<<"* ";
        }
        nsp--;
        nst += 2;
        cout<<endl;
    }
}
