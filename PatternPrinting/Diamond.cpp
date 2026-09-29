#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    //method 2
    int nsp = n-1, nst = 1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){ // spaces
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){ // spaces
            if(j==1 || j==nst) cout<<"* ";
            else cout<<"  ";
        }
        if(i<n){
            nsp--;
            nst += 2;
        }
        else{
            nsp++;
            nst -= 2;
        }
        cout<<endl;
    }

    
//method 1
// // upper pyramid
// int  nsp = n-1, nst = 1;
//for(int i=1;i<=n;i++){
//    for(int j=1;j<=nsp;j++){ //spaces
//        cout<<"  ";
//      }
//      for(int j=1;j<=nst;j++){ //stares
//          cout<<"* "; 
//      }
//      nsp--;
//      nst += 2;
//      cout<<endl;
// }
// // lower inverted pyramid
// nsp = 1;
// nst = 2*n-3;
// for(int i=1;i<=n-1;i++){
//     for(int j=1;j<=nsp;j++){ // spaces
//         cout<<"  ";
//      }
//      for(int j=1;j<=nst;j++){ //stars
//          cout<,"* ";
//      }
//      nsp++;
//      nst -= 2;
//      cout<<enndl;
// }
}