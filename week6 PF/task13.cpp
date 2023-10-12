#include<iostream>
using namespace std;
float price(int,string);
main(){
int dis;
string time;
cout<<"Enter the number of kilometers: ";
cin>>dis;
cout<<"Enter the period of the day (day/night): ";
cin>>time;
float result=price(dis,time);
cout<<"Lowest price for "<<dis<<" kilometers: "<<result<<" EUR";

}
float price(int dis,string time){
    float price;
    if(dis<20 && time=="day"){
        price=dis*0.79+0.7;
    }
        if(dis<20 && time=="night"){
        price=dis*0.9+0.7;
    }
        if(dis>=20 && dis<100 && (time=="day" || time=="night")){
        price=dis*0.09;
    }
            if(dis>=100  && (time=="day" || time=="night")){
        price=dis*0.06;
    }
    return price;

}