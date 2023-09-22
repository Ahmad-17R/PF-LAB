#include<iostream>
using namespace std;
main(){
	int total;
	int birthrate;
	cout<<"Enter the current world population: ";
	cin>>total;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>birthrate;
	int add;
	add=birthrate*360;
	int result;
	result=add+total;
	cout<<"The population in three decades will be: "<<result;}