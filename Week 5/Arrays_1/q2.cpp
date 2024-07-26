//Find the second largest element in the given Array in one pass.
#include <iostream>
#include <climits>
using namespace std;
int main(){
    //creating and showing array
    int n;
    cout<<"enter the sze of array: ";
    cin>>n;
    int ar[n];
    cout<<"enter the array elements\n";
    for(int i=0;i<n;i++) cin>>ar[i];
    cout<<"array is: \n";
    for(int i=0;i<n;i++) cout<<ar[i]<<" ";
    
    //finding second largest element
    int max= INT_MIN,secmax=INT_MIN;
    for (int i =0;i<n;i++) {
        if(ar[i]>max) secmax=max, max=ar[i];
        
    }
    cout<<endl<<secmax;
    
}