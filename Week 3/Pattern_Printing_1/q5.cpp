// Print the following pattern
// Input n = 4
// Output:
//  1 2 3 4
//1 *
//2 * *
//3 * * *
//4 * * * *
//5 * * *
//6 * *
//7 *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    for(int i = 1; i<=n*2-1;i++){
        for(int j=1;j<=i;j++){
            if(i+j<=8) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
} 