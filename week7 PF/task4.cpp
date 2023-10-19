#include<iostream>
using namespace std;
int frequency(int,int);
main(){
    int num,digit;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter the digit to check: ";
    cin>>digit;
    cout<<"Frequency: "<<frequency(num,digit);
}
int frequency(int num,int digit){
    int count=0;
while (num!=0 )
{  
   if(num%10==digit){
    count++;
   }

   num=num/10;
}
return count;
    
}