// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<(char)(k+64);
        }
        for(int j=1;j<=i-1;j++){
            cout<<(char)(j+65);
        }
        cout<<endl;
    }
} 