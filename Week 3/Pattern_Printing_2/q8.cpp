// Print the following pattern
// Sample Input : n = 4
// Output :
//    1
//   2 2
//  3   3
// 4     4

#include <iostream>
using namespace std;
int main(){
    int n,nsp1,nsp2;
    cout<<"enter:";
    cin>>n;
    nsp1=n-1;
    nsp2=-1;
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=nsp1;j++){
            cout<<" ";
        }
        nsp1--; 
        cout<<i;
        for(int k=1;k<=nsp2;k++){
            cout<<" ";
        }
        nsp2+=2; 
        if(i==1) cout<<endl;
        else cout<<i<<endl;
    }
} 
