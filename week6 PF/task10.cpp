#include<iostream>
using namespace std;
bool same(int,int,int);
main(){
int a,b,c;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;
cout<<"Enter the third number: ";
cin>>c;
bool result=same(a,b,c);
cout<<result;
}
bool same(int a,int b,int c){
    if(a==b && a==c && b==c){
        return true;
    }
    else{
        return false;
    }
}