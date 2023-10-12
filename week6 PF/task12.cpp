#include<iostream>
using namespace std;
float amount(string,int,int);
main(){
    string ticket;
    int row,column;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>ticket;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the numnber of columns: ";
    cin>>column;
    float result=amount(ticket,row,column);
    cout<<result;

}
float amount(string ticket,int row,int column){
    float price;
    if( ticket == "Premiere"){
        price=12;
    }
       if( ticket == "Normal"){
        price=7.50;
    }
       if( ticket == "Discount"){
        price=5.00;
    }
    return (price*row*column);



}