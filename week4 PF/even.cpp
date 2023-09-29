#include<iostream>
using namespace std;
void ever(int number);

main(){
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	ever(number);
}
void ever(int number){
	if(number % 2 == 0){
           cout<<"Number "<<number<<" is even";}
        if(number % 2 != 0){
           cout<<"Number "<<number<<" is odd";}

}

