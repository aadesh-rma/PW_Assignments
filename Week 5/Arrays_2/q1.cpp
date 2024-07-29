//Count the number of elements strictly greater than x.

#include<iostream>
#include<vector>
using namespace std;
display(vector<int>v){
    cout<<"your array is:";
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int x,count=0;
    vector<int>v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(4);
    v.push_back(3);
    v.push_back(8);
    v.push_back(1);
    v.push_back(9);
    display(v);
    cout<<"enter x:";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(v[i]>x) count++;
    }
    cout<<count;
}