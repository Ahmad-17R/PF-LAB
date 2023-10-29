#include <iostream>
#include<string>
using namespace std;

bool isprime(int num);
void deciToBinary(int decimalNumber){
    int binaryResult;
    if (decimalNumber == 0){
        binaryResult=0;

    string binaryResult = "";}
    else{
    while (decimalNumber > 0) {
        binaryResult = (decimalNumber % 2) + binaryResult;
        decimalNumber /= 2;
    }
    if (binaryResult==1)
    {
        cout<<"Odius";
    }
    else if (binaryResult%2==0)
    {
        if (binaryResult==2)
        {
            cout<<"Evil,Pernicious";
        }
        else{
        cout<<"evil";}
    }
    else if (binaryResult%3==0)
    {
       if (isprime(binaryResult)==true)
       {
        cout<<"Odius,Pernicious";
       }
        
    }
    
    
    }

    
}


main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    deciToBinary(decimalNumber);

}
bool isprime(int num){
    int count=0;
for (int i = 1; i <= num; i++)
{
   if(num%i==0){
    count++;
   }
}
if (count==2)
{
    return true;
}}
