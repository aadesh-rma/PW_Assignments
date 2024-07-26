// Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the sze of array: ";
    cin>>n;
    int ar[n];
    cout<<"enter the array elements\n";
    for(int i=0;i<n;i++) cin>>ar[i];

    cout<<"array is: \n";
    for(int i=0;i<n;i++) cout<<ar[i]<<" ";
    int prod=1;
    for (int i =0;i<n;i++) prod*=ar[i];
    cout<<endl<<"product of array="<<prod;
    
}