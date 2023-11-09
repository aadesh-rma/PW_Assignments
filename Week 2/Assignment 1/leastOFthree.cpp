// If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"give three numbers:";
    cin>>a>>b>>c;
    if (a<b) {
        if (a<c) cout<<a<< "is least";
        else cout<<c<<"is least";
    }
    
    else {
        if (b<c) cout<<b<< "is least";
        else cout<<c<<"is least"; 
    };
}