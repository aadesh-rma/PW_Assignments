//Write a function to count the number of digits in a number 
// and then print the square of this number.

#include <iostream>
using namespace std;
void digitThenSquare(int x){
    int sq=x*x,count=0;
    for(;x>0;){
        x=x/10;
        count++;
    }
    cout<<count<<endl<<sq;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    digitThenSquare(n);
}