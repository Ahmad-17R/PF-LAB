#include<iostream>
using namespace std;
bool isprime(int num);
int primorial(int num);


main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<primorial(num);

}
bool isprime(int num){
    int count=0;
for (int i = 1; i <= num; i++)
{
   if(num%i==0){
    count++;
   }
}
if (count==2)
{
    return true;
}
else
{
    return false;
}
}
int primorial(int num){
    int count=0;
    bool j;
    for (int i = 1; i <=num; i++)
    { j=isprime(i);
      if(j==true){
        count++;
      }

    }
    return count;
    
}