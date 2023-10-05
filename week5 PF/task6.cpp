#include<iostream>
using namespace std;

string checkalphabet(string);
	
main(){

	string alphabet;
	cout<<"Enter a character (A/a): ";
	cin>>alphabet;
	string result=checkalphabet(alphabet);
	if(result=="A"){cout<<"You have entered Capital "<<result;}
	if(result=="a"){cout<<"You have entered small "<<result;}


}
string checkalphabet(string letter){
	if(letter=="A"){
	
	return letter;
}
	if(letter=="a"){
	
	return letter;}

}	