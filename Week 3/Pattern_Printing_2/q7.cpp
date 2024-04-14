// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
//     *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//     *

#include <iostream>
using namespace std;
int main(){
    int n,nsp1,nsp2;
    cout<<"enter:";
    cin>>n;
    nsp1=n-1;
    nsp2=-1;
    for(int i = 1; i<=(n*2)-1;i++){
        for(int j=1;j<=nsp1;j++){
            cout<<" ";
        }
        if(i<n) nsp1--; 
        else nsp1++;
        cout<<"*";
        
        for(int k=1;k<=nsp2;k++){
            cout<<" ";
        }
        if(i<n) nsp2+=2; 
        else nsp2-=2;
        if((i==1)||(i==n*2-1)) cout<<endl;
        else cout<<"*"<<endl;
    }
} 
