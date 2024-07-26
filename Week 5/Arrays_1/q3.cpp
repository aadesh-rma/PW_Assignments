//Find the minimum value out of all elements in the array.
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
    
    //finding minimum element
    int min=INT_MAX;
    for (int i =0;i<n;i++) {
        if(ar[i]<min) min=ar[i];
        
    }
    cout<<endl<<min;
    
}