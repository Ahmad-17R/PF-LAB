#include<iostream>
using namespace std;
bool evenorodd( int);


main(){
    int num1;
    cout<<"Enter a 3-digit number: ";
    cin>>num1;
    bool result=evenorodd(num1);
    cout<<result;
}
bool evenorodd(int num1){
    int lastdigit=num1%10;
    int twodigits=num1/10;
    int secondddigit=twodigits%10;
    int onedigit=twodigits/10;
    int finalnum=lastdigit+secondddigit+onedigit;
    if(finalnum % 2== 0 && num1%2==0){
        return true;
    }
        if(finalnum % 2!= 0 && num1%2!=0){
        return true;
    }
        if(finalnum % 2!= 0 && num1%2==0){
        return false;
    }
        if(finalnum % 2== 0 && num1%2!=0){
        return false;
    }
}


