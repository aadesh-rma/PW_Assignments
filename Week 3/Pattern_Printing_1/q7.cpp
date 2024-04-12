// Print the following pattern
// Sample Input : n = 4
// Output :
//  1 2 3 4 5 6 7
//1       * * * *
//2     * * * *
//3   * * * *
//4 * * * *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    for(int i = 1; i<=n;i++){
        
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
} 