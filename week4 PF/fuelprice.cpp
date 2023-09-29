#include<iostream>
using namespace std;
void calculateFuel();
main(){

	calculateFuel();

}
void calculateFuel(){
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	float calculateFuel;
	calculateFuel=10*distance;
	cout<<"Fuel needed: "<<calculateFuel;




}