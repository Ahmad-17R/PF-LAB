#include<iostream>
using namespace std;
float perimeter(char,float);
main(){
char character;
float side;
cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
cin>>character;
cout<<"Enter the value: ";
cin>>side;
float result=perimeter(character,side);
cout<<"The perimeter is: "<<result;
}
float perimeter(char character,float side){
    float perimeter;
    if(character=='s'){
        perimeter=4*side;

    }
        if(character=='c'){
        perimeter=6.28*side;

    }
        if(character=='t'){
        perimeter=3*side;

    }
        if(character=='h'){
        perimeter=6*side;

    }
    return perimeter;
}