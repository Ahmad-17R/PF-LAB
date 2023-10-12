#include<iostream>
using namespace std;
string title(int,char);

main(){
int age;
char gender;
cout<<"Enter your age: ";
cin>>age;
cout<<"Enter your gender (m/f): ";
cin>>gender;
string result=title(age,gender);
cout<<"Your personal title is: "<<result;




}
string title(int age,char gender){
 string status;
 if(age>=16 && gender=='m'){
  status="Mr.";
 }
  if(age<16 && gender=='m'){
  status="Master";
 }
  if(age>=16 && gender=='f'){
  status="Ms.";
 }
  if(age<16 && gender=='f'){
  status="Miss";
 }
 return status;
}