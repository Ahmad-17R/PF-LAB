#include<iostream>
using namespace std;
void discount(int amount);
main(){
	string day;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	int amount;	
	cout<<"Enter the total purchase amount: $";	
	cin>>amount;
	float newamount;
	newamount=0.95*amount;
    if(day == "Sunday"){
	discount(amount);
}
   if(day != "Sunday"){
	cout<<"Payable Amount: $"<<newamount;
}	


}
void discount(int amount){
	float Payable=amount*0.9;
	cout<<"Payable Amount: $"<<Payable;


}