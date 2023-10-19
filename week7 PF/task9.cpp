#include<iostream>
using namespace std;
int result(int,int);
main(){
    int year,budget;
    cout<<"Enter Money: ";
    cin>>budget;
    cout<<"Enter year: ";
    cin>>year;
int totalbudget = result(year,budget);
if(budget >= totalbudget){
    totalbudget = budget - totalbudget ;
    cout<<"Yes! He will live a carefree life and will have " << totalbudget << " dollars left.";
    }
   else if(budget < totalbudget){
    totalbudget = totalbudget - budget ;
    cout<<"He will need " << totalbudget << " dollars to survive.";
    }
}
int result(int year,int budget){
int evenbudget=0,oddbudget=0,oddyearsmoneyspent = 0;
 for( int x = 1800; x <= year; x=x+2)
 {
    evenbudget=evenbudget+12000;
 }
 for (int x = 1801; x <= year; x=x+2)
 {
    oddyearsmoneyspent=oddyearsmoneyspent + 1;
    int agediff=(year-x+18)*50;
    oddbudget=oddbudget+agediff+12000;
 }
int  totalbudget=evenbudget+oddbudget;
return totalbudget;
}