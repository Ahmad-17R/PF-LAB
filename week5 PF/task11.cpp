#include<iostream>
using namespace std;

main(){

	int vol,p1,p2;
	float h;
	cout << "Enter volume of the pool in liters: ";
	cin >> vol;
	cout << "Enter flow rate of the first pipe per hour: ";
	cin >> p1;
	cout << "Enter flow rate of the second pipe per hour: ";
	cin >> p2;
	cout << "Enter hours that the worker is absent: ";
	cin >> h;
	float c1 = p1*h;
	float c2 = p2*h;
	float p = c1+c2;
	if (p < vol){
		int per = (p/vol)*100;
		int per1 = (c1/p)*100;
		int per2 = (c2/p)*100;
		cout << "The pool is "<<per<< "% full. Pipe 1: "<<per1<< "%. Pipe 2: "<<per2<< "%.";
	}
	if (p > vol){
		int diff = p-vol;
		cout << "For "<<h<< " hours, the pool overflows with "<<diff<< " liters.";
	}

}
		