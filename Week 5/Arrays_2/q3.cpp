//Check if the given array is sorted or not

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
    
        for(int i=1;i<v.size()-1;i++){
            if(v[i-1]>v[i]) flag=false;
            else continue;
        }

    if(flag == false) cout<<"unsorted";
    if(flag == true) cout<<"sorted";
}