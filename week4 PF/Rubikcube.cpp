#include<iostream>
using namespace std;
void howManyStickers();
main()
{

	howManyStickers();


}
void  howManyStickers(){
	float sides;
	cout<<"Enter the side length of the Rubik's Cube: "; 
	cin>>sides;
	float howManyStickers;
	howManyStickers=sides*(6*sides);
	cout<<"Number of stickers needed: "<< howManyStickers;




}