#include<iostream>
using namespace std;
int digit(int);

main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int num1=abs(num);
  int result= digit(num1) ;
  cout<<"Total number of digits: "<<result;
    }
int digit(int number){
    int count=0;
  if(number<=-9 && number<=9 )  {int count =1;}

while (number!=0)
{

 count++;
  number=number/10;

}

    
return count;

}    