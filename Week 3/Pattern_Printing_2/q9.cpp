// Print the following pattern
// Sample Input : n = 5
// Output :

//   123456789ti
//1       *     
//2      ***    
//3     * * *   
//4    *  *  *  
//5   *   *   * 
//6  ***********
//7   *   *   *
//8    *  *  *
//9     * * *
//10     ***
//11      *

#include <iostream>
using namespace std;
int main(){
    int n,nsp1,nsp2;
    cout<<"enter:";
    cin>>n;
    nsp1=n;
    nsp2=-1;
    for(int i = 1; i<=(n*2)+1;i++){
        for(int j=1;j<=nsp1;j++){
            cout<<" ";
        }
        if(i<=n) nsp1--; 
        else nsp1++;
        cout<<"*";
        
        for(int k=1;k<=nsp2;k++){
            if (k==nsp2/2+1||i==n+1) cout<<"*";
            else cout<<" ";
        }
        if(i<=n) nsp2+=2; 
        else nsp2-=2;
        if((i==1)||(i==n*2+1)) cout<<endl;
        else cout<<"*"<<endl;
    }
} 