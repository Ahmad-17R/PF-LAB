#include<iostream>
using namespace std;
bool greaternumber(int,int);

main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    bool result=greaternumber(a,b);
    cout<<result;

}
bool greaternumber(int a,int b){
    bool c;
    if(a>b){
        c=true;

    }
    if(a<b){
        c=false;
    }
return c;}