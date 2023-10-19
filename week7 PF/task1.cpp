#include<iostream>
using namespace std;
void table(int);
main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    table(number);
}
void table(int number){
    int x;
for ( x = 1; x < 11; x++)
{
    cout<<number<<" x "<<x<<" = "<<number*x<<endl;
}

}