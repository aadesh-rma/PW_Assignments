// Print the following pattern
// Input: n = 4
// Output:
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int m=n-1;

    for(int k=1;k<=n*2-1;k++){
            cout<<(char)(k+64)<<" ";
        }
    cout<<endl;
    for(int i = 1; i<=m;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
            cout<<(char)(a+64)<<" ";
            a++;
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<"  ";
            a++;
        }
        for(int j=1;j<=n-i;j++){
            cout<<(char)(a+64)<<" ";
            a++;
        }
        cout<<endl;
    }
} 