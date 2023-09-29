#include<iostream>
using namespace std;
void printn(string);
main(){
	string nam;
	cout<<"enter your name: ";
	cin>>nam;
	printn(nam);
}
void printn(string intro){
	 
	cout<<"Your name is:"<<intro;
}