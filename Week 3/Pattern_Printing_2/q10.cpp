// Print the following pattern
// Input : n = 4
// Output :

// *     *
// **   **
// *** ***
// *******
// *******
// *** ***
// **   **
// *     *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int a;
    for(int i = 1; i<=(n*2);i++){
        a=i;
        if(a>n) a=2*n-a+1;
        for(int j=1;j<=a;j++){
            cout<<"*";
        }
        for(int k=1;k<=(n*2-1)-2*a;k++){
            cout<<" ";
        }
        for(int j=1;j<=a;j++){
            if(j==n) continue;
            cout<<"*";
        }
        cout<<endl;
    }
} 