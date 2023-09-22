#include<iostream>
using namespace std;
main(){	
	float Voltage;
	float Current;	
	cout<<"Enter voltage (in volts): ";
	cin>>Voltage;
	cout<<"Enter current (in amperes): ";
	cin>>Current;
	float Power;
	Power=Voltage*Current;
	cout<<"The power is "<<Power<<" watts.";


}