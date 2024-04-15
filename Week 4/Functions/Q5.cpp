// Explore:
//Can the same function name be used for different functions 
//without any conflict?

// let's see then

#include <iostream>
using namespace std;
void greet(){
    cout<<"heyllo";
}
int greet(int n){
    return 1;
}
int main(){
    cout<<greet(5);
}