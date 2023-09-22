#include<iostream>
using namespace std;
main(){
 	int win;
 	int draw;
	int loss;
	string name;
	cout<<"Enter the name of the cricket team: ";
	cin>>name;
	cout<<"Enter the number of wins: ";
	cin>>win;
	cout<<"Enter the number of draws: ";
	cin>>draw;
	cout<<"Enter the number of losses: ";
	cin>>loss;
	int WIN;
	WIN=win*3;
	int points;
	points=WIN+draw;
	cout<<name<<" has obtained "<<points<<" points in the Asia Cup tournament.";
	


}