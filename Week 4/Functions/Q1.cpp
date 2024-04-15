//Write a function to print squares of first n natural numbers,
// taking n as argument to the function

#include <iostream>
using namespace std;
void sqn(int x){
    for(int i=1;i<=x;i++){
        cout<<i*i;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    sqn(n);
}
