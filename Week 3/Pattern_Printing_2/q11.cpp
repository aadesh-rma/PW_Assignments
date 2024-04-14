// Print the following pattern
// Input: n = 4

// Output:

//   1234567
// 1 *******
// 2 *** ***
// 3 **   **
// 4 *     *
// 5 **   **
// 6 *** ***
// 7 *******

#include <iostream>
using namespace std;
int main(){
    int n,nsp;
    cout<<"enter:";
    cin>>n;
    int a;
    nsp=-1;
    for(int i = 1; i<=(n*2)-1;i++){
        a=i;
        if(a>n) a=2*n-a;
        for(int j=1;j<=n+1-a;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        if (i>=n) nsp-=2;
        else nsp+=2;
        for(int j=1;j<=n+1-a;j++){
            if(j==n) continue;
            cout<<"*";
        }
        cout<<endl;
    }
} 