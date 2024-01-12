// WAP to print the sum of all the even digits of a given number.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.:";
    cin>>n;
    int r,s=0;
    while(n>0){
        r=n%10;
        if(r%2==0) s+=r;
        n/=10;
    }
    cout<<s;
}