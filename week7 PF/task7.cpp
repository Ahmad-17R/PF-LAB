#include<iostream>
#include<iomanip>
using namespace std;
void percentage(int);
main(){
    int count;
    cout<<"Enter numbers count: ";
    cin>>count;
    percentage(count);
 
}
void percentage(int count){
    float countp1=0.0,countp2=0.0,countp3=0.0,countp4=0.0,countp5=0.0;
    for (int  x = 1; x <= count; x++)
    {int num;
       cout<<"Enter a number: ";
       cin>>num;
       if(num<200){
        ++countp1;
       }
        else if(num>=200 && num<400){
        ++countp2;
       }
           else if(num>=400 && num<600){
       ++countp3;
       }
           else if(num>=600 && num<800){
        ++countp4;
       }
           else if(num>=800 && num<=1000){
        ++countp5;
       }}
        countp1=(countp1/count)*100;
       countp2=(countp2/count)*100;
       countp3=(countp3/count)*100;
       countp4=(countp4/count)*100;
       countp5=(countp5/count)*100;

    

cout<< fixed<<setprecision(2)<< countp1 <<"%" <<endl ;
cout<<fixed << setprecision(2) << countp2 <<"%" <<endl ;
cout<<fixed << setprecision(2) <<  countp3 <<"%" <<endl ;
cout<<fixed << setprecision(2) <<  countp4 <<"%" <<endl ;
cout<<fixed << setprecision(2) << countp5 <<"%" ;
    }
