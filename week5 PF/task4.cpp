#include<iostream>
#include<cmath>
using namespace std;

main(){
	float base,angle;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>base;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>>angle;
	float perp=tan((angle*1)/57.2958)*base;
	cout<<"The height of the tree is: "<<perp<<" feet";



}