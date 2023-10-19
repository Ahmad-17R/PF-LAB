#include <iostream>
using namespace std;
int GCD(int , int ) ;
int LCM(int  num1, int num2);


int main() {
    int num1, num2;
    cout << "Enter the first number: ";
     cin >> num1 ;
     cout << "Enter the second number: ";
     cin >> num2 ;


    int result = GCD(num1, num2);
    int result2=LCM(num1,num2);

  cout <<"GCD: "<< result<<endl;
  cout <<"LCM: "<< result2;
}
int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return GCD(num2, num1 % num2);
}
int LCM(int  num1, int num2) {
    
    return (num1 * num2) / GCD(num1, num2);
}


