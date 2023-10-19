#include<iostream>
using namespace std; 
int sum(int);
main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Sum of digits: "<<sum(num);

}
int sum(int num){
    int sum=0,add;
    while(num!=0){
        add=num%10;
        sum=sum+add;
        num=num/10;
    }
return sum;


}