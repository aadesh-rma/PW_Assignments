// Write a C++ program to input any character and 
// check whether it is the alphabet, digit or special character.
// 'a'=97 'z'=122, 'A'=65 'Z'=90, '0'=48 '9'= 57
#include <iostream>
using namespace std;
int main(){
    char x;
    cout<<"inut a character:";
    cin>>x;
    
    if ((x>=97 && x<=122)||(x>=65 && x<=90))
    {
        cout<<"x is an alphabet";
    }
    else if(x>=48 && x<=57) cout<<"x is a number";
    else cout<<"it is a special character";
}