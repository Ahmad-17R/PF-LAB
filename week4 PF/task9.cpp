#include<iostream>
using namespace std;
void fuel(float dis);
main(){
	float dis;
	cout<<"Enter the distance: ";
	cin>>dis;
	fuel(dis);
	


}
void fuel(float dis){
	float fuel;
	fuel=10*dis;
	if(fuel > 100){
	  cout<<"Fuel needed: "<<fuel;
	}
        if(fuel < 100){
	  cout<<"Fuel needed: 100";
	}



}