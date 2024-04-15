// Given two numbers a and b, write a function to print all odd numbers between them.

#include <iostream>
using namespace std;
void oddNoBtw(int x,int y){
    for(int i=min(x,y);i<=max(x,y);i++){
        if(i%2!=0) cout<<i<<endl;
    }
}
int main(){
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    oddNoBtw(a,b);
}