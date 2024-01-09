//Write a program to count the minimum number of notes in a given amount using the switch statement.
#include <iostream>
using namespace std;
int main()
{
    int x,a=0,b=0,c=0,d=0,e=02,f=0;
    cout<<"enter the amout";
    cin>>x;
    // 10a,20b,50c,100d,500e,1000f
    switch(x>=1000){
        case 1: 
        f = x/1000;
        x= x- f*1000;
    }
    switch(x>=500){
        case 1: 
        e = x/500;
        x= x- e*500;
    }
    switch(d>=100){
        case 1: 
        d  = x/100;
        x= x- d*100;
    }
    switch(x>=50){
        case 1: 
        c = x/50;
        x= x- c*50;
    }
    switch(x>=20){
        case 1: 
        b = x/20;
        x= x- b*20;
    }
    switch(x>=10){
        case 1: 
        a = x/10;
        x= x- a*10;
    }
    //cout<<"amount left="<<x<<endl;
    cout<<"notes of 1000="<<f<<endl;
    cout<<"notes of 500="<<e<<endl<<"notes of 100="<<d<<endl<<"notes of 50="<<c<<endl<<"notes of 20="<<b<<endl<<"notes of 10="<<a<<endl;
}