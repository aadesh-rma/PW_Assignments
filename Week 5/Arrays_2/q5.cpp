//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
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
    bool flag=true;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter array elements:";
    for(int i=0;i<v.size();i++) cin>>v[i];
    display(v);
    
    for(int i=0;i<v.size();i++){
        if(i%2==0) v[i]+=10;
        else v[i]*=2;
    }
    display(v);
}