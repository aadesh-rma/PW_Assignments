//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

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
    int n,esum=0,osum=0;
    bool flag=true;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter array elements:";
    for(int i=0;i<v.size();i++) cin>>v[i];
    display(v);
    
    for(int i=0;i<v.size();i++){
        if(i%2==0) esum+=v[i];
        else osum+=v[i];
    }
    cout<<"=> sum at even - sum at odd \n=> "<<esum <<" - " <<osum<<"\n=> "<<esum-osum;
}