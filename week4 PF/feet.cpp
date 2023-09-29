#include<iostream>
using namespace std;
void inchestoFeet();
main(){
	
	inchestoFeet();
	


}
void inchestoFeet(){
	float inches;
	cout<<"Enter the measurement in inches: ";
	cin>>inches;
	float inchestoFeet;
	inchestoFeet=inches/12;
	cout<<"Equivalent in feet: "<<inchestoFeet;



} 