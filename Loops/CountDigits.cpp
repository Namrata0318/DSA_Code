#include<iostream>
using namespace std;
int main(){
   /*int x = 34353;
    x /=10;
    x /=10;
    x /=10;
    x /=10;
    x /=10;
    cout<<x;*/
    int n;
    cin>>n;
    int count = 0;
    if(n==0) count++;
    while(n != 0){
        n /=10;
        count++;
    }
    cout<<count;
}
