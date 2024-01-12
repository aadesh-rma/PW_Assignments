//Print first ‘n’ fibonacci numbers.

#include <iostream>
using namespace std;
// 1 1 2 3 5 8 13 21.....
int main(){
    int n;
    cout<<"enter the number of term:";
    cin>>n;
    int f=1,s=1,t;
    cout<<f<<" "<<s<<" ";
    for(int i=3;i<=n;){
            t= f+s;
            cout<<t<<" ";
            f=s;
            s=t;
            i++;
    }
}