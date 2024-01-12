//WAP to print the sum of a given number and its reverse.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int o = n;
    int s=0,r = 0;
    while(n>0){
        r = n%10;
        s = s*10+r;
        n=n/10;
    }
    cout<<"original number + reverse number =\n"<<o<<"+"<<s<<"="<<o+s;
}