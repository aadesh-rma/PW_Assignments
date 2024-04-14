// Print the following pattern
// Input: n = 5
// Output:
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    for(int i = 1; i<=n-1;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<k;
        }
        cout<<endl;
    }
} 