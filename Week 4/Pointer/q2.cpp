// int *p, q;
// 1). p is a pointer and q is an integer.
// 2). p and q both are pointers.
// 3). P and q both are integers.
// 4). Syntax is incorrect.

// p is a pointer and q is an integer.

#include <iostream>
using namespace std;
int main(){
    int* p,q;
    cout<<p<<" "<<q;
    //the garbage value also satisfies the answer as the datatype is still that of apointer and integer
}