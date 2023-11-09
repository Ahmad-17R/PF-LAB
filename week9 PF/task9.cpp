#include<iostream>
using namespace std;
bool payment(double elements[]);

main(){
    
     double elements[4];
    cout<<"Enter quarters: ";
    cin>>elements[0];
    cout<<"Enter dimes: ";
    cin>>elements[1];
    cout<<"Enter nickels: ";
    cin>>elements[2];
    cout<<"Enter pennies: ";
    cin>>elements[3];
    cout<<"Enter the total amount due: $";
    cin>>elements[4];
    bool result=payment(elements);
    cout<<"Can you pay the amount? ";
    if (result==false)
    {
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    

}
bool payment(double elements[]){
     elements[0]  =0.25* elements[0];
     elements[1]  =0.10* elements[1];
     elements[2]  =0.05* elements[2];
     elements[3]  =0.01* elements[3];
     double sum=0;
     for (int i = 0; i < 4; i++)
     {
        sum=sum+elements[i];
     }
     if(sum>= elements[4]){
        return true;
     }
     else{
        return false;
     }
     
}