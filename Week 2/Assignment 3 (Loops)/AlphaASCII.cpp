// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include <iostream>
using namespace std;

int main(){
    int q= 'A';
    while(q<='Z'){
        cout<<(char)q<<" "<<q<<endl;
        q++;
    }
}