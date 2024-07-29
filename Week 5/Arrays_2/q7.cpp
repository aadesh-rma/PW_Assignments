//If an array arr contains n elements, then check if the given array is a palindrome or not .

#include<iostream>
#include <vector>
using namespace std;

void display(vector<int>v){
    cout<<"your array is:"<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
void rev(vector<int>&v,int i, int j){
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

int main(){
    int n,k;
    cout<<"give the array size:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter the array elements:"<<endl;
    for(int i=0;i<n;i++) cin>>v[i];
    display(v);
    vector<int>v2=v;
    rev(v,0,n-1);
    display(v);
    if(v==v2) cout<<"palindrome";
    else cout<<"not palindrome";
}