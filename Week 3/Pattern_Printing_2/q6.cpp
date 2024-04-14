// Print the following pattern
// Input : n = 5
// Output:
// *               *
//   *           *
//     *       *
//       *   *
//         *

//nsp1 = 0 ; nsp1++
//nsp2 = 7 ; nsp2 -= 2

#include <iostream>
using namespace std;
int main(){
    int n,nsp1=0,nsp2;
    cout<<"enter:";
    cin>>n;
    nsp2=n*2-3;
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=nsp1;j++){
            cout<<" ";
        }
        nsp1++; 
        cout<<"*";
        for(int k=1;k<=nsp2;k++){
            cout<<" ";
        }
        nsp2 -= 2;
        if(i==n) break;
        cout<<"*";
        cout<<endl;
    }
} 