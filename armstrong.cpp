// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

#include <iostream>
using namespace std;
int main(){
int n,original;
for(n=1;n<=500;n++){
    original = n;
    int rem, cube=1, sum=0;
    while( original > 0){
        rem = original %10;
        cube = rem * rem * rem;
        sum = sum + cube;
        original = original / 10;
    }
    if(sum==n) cout<<n<<endl;
  }  
}