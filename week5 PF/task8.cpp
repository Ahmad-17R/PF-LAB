#include<iostream>
using namespace std;

main(){
	int num1,num2,num3,num4,num5,sum;
	cout << "Enter a five-digit number: ";
	int num;
	cin >> num;
	num1 = num%10;
	num = num/10;
	num2 = num%10;
	num = num/10;
	num3 = num%10;
	num = num/10;
	num4 = num%10;
	num = num/10;
	num5 = num%10;
	num = num/10;
	sum = num1+num2+num3+num4+num5;
	if (sum%2 == 0){
		cout << "Evenish";
	}
	if (sum%2 == 1){
		cout << "Oddish";
	}
} 