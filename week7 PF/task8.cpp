#include<iostream>
using namespace std ;
int calculate(int , int, int );


main(){

int age,machinepr,price;
cout<<"Enter Lilly's age: ";
cin>>age;
cout<<"Enter the price of the washing machine: ";
cin>>machinepr ; 

cout<<"Enter the unit price of each toy: " ;
cin>> price ; 

int totalsavings = calculate(age,machinepr, price);


if(totalsavings >= machinepr){

        totalsavings = totalsavings - machinepr ;

        cout<<"Yes!" << endl << totalsavings; }
    
else if(totalsavings < machinepr){

        totalsavings = machinepr - totalsavings ;

        cout<<"No!" <<endl << totalsavings;
 }

}
int calculate(int age, int price, int toycost){
    int savedmoney = 0 , toymoney= 0, money = 0 ;
 

    for(int x = 2 ; x <= age ; x = x  + 2 )
    {
        money = money + 10 ;
        savedmoney = savedmoney + money ;
        savedmoney = savedmoney - 1 ;
    }


    for(int x = 1 ; x < age ; x = x  + 2 )
    {
        toymoney++;
    }


    int toyamount ;
    toyamount = toymoney * toycost ;
     int resultamount = savedmoney + toyamount ;
    return resultamount ;
}

    
