#include<iostream>
using namespace std;
int greaternum(int ,int ,int );


main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    int result=greaternum(a,b,c);
    cout<<"The greatest number among "<<a<<", "<<b<<", and "<<c<<" is: "<<result;

}
int greaternum(int a,int b,int c){
    int great;
    if(a>b && a>c){
          great=a;
    }
       if(b>a && b>c){
          great=b;

    }
       else{
          great=c;
    }
return great;}