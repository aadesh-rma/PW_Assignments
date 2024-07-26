//Given an array, predict if the array contains duplicates or not.
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
    
    //predicting duplicates
    bool dup = false;
    for (int i =0;i<n;i++) {
        for(int j=0;j<n;j++){
        if (ar[i]==ar[j]) dup=true;
        }
    }
    
    if(dup==true) cout<<endl<<"Duplicates found";
    
}