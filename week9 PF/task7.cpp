#include<iostream>
using namespace std;
double total(double resistance[],int size);

main(){
    int num;
    cout<<"Enter the number of resistors in the series circuit: ";
    cin>>num;
    cout<<"Enter the resistance values (in ohms) of the "<<num<<" resistors, one per line:"<<endl;
    double resistance[num];
    for (int  i = 0; i < num; i++)
    {
        cin>>resistance[i];
    }
    int size=sizeof(resistance)/sizeof(resistance[0]);
    double result=total(resistance,size);
    cout<<"The total resistance of the series circuit is "<<result<<" ohms.";
}
double total(double resistance[],int size){
    double sum=0;
    for (int i = 0; i < size; i++)
    {
     sum=sum+resistance[i];   
    }
    return sum;
}