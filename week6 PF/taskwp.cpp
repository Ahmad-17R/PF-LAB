#include<iostream>
#include<string>
using namespace std;
string passorfail(int);

main(){
    int marks;
    cout<<"Enter your score";
    cin>>marks;
    cout<<passorfail(marks);

}
string passorfail(int marks){
    string result;

if(marks>50){
    result="You are passed with "+to_string(marks)+" marks";

}
if(marks<=50){
    result="You are failed with "+to_string(marks)+" marks";
}
return result;
}










