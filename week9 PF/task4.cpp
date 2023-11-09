#include<iostream>
using namespace std;
void reverse(int elements[],int num);

main(){
    int num;
    cout<<"Enter the number of elements: ";
    cin>>num;
    if (num<=0)
    {
        cout<<"Invalid input. Number of elements must be greater than 0."<<endl;
    }
   else{ 
    cout<<"Enter "<<num<<" numbers, one per line:"<<endl;
    
    int x=num;
    int elements[x]; 
    for (x = 0; x < num; x++)
    {
        cin>>elements[x];
        
    }
    reverse(elements,num);
    

   }
}
void reverse(int elements[],int num){
    cout<<"Numbers in reverse order: ";
    for (int i=num-1;i>=0 ; i--)
    {
        cout<<elements[i]<<" ";
    }
    
}