//WAP to find the largest three elements in the array.

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int>v){
    cout<<"your array is:";
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter array elements:";
    for(int i=0;i<v.size();i++) cin>>v[i];
    display(v);
    
    vector<int>lte(3,INT_MIN);
    
    for(int i=0;i<v.size();i++){
    if(v[i]>lte[0]) lte[0]=v[i];
    }
    
    for(int i=0;i<v.size();i++){
    if(v[i]>lte[1] && v[i]!=lte[0]) lte[1]=v[i];
    }
    
    for(int i=0;i<v.size();i++){
    if(v[i]>lte[2] && v[i]!=lte[0] && v[i]!=lte[1]) lte[2]=v[i];
    }

    cout<<"max three numbers are:";
    display(lte);
}