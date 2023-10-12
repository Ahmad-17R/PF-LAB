#include<iostream>
using namespace std;
int discount(string,string,float);

main(){
string day,month;
float amount;
cout<<"Enter Purchase Day: ";
cin>>day;
cout<<"Enter Purchase Month: ";
cin>>month;
cout<<"Enter Purchase Amount: ";
cin>>amount;
float result=discount(day,month,amount);
cout<<"Payable Amount after discount: "<<result;

}
int discount(string day,string month, float amount){
    float newamount=amount;
    if(day=="Sunday" && month=="October"){
        newamount=amount-(amount*0.1);
    }
    if(day=="Sunday" && month!="October"){
        newamount=amount-(amount*0.1);
    }

  
   
    return newamount;

}
