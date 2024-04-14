// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int m=n-1;

    for(int k=1;k<=n*2-1;k++){
            if(k>n) cout<< 2*n-k<<" ";
            else cout<<k<<" ";
        }
    cout<<endl;
    for(int i = 1; i<=m;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<"  ";
        }
        for(int j=n-i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
} 