#include<iostream>
#include<cmath>

using namespace std;
int cubes(int num);
main(){
    double num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<cubes(num);

}
int cubes(int num){
    int count=0;
    int sum=0;
    for ( int i =num ;i>0 ;i-- )
    {
     sum=sum+pow(i,3);
     count++;
    }
    return count;
    
}