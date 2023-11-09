#include<iostream>
using namespace std;
void special(int elements[],int size);

main(){
    int num;
    cout<<"Enter the size of the array: ";
    cin>>num;
    int elements[num];
    cout<<"Enter "<<num<<" elements of the array:"<<endl;
    for (int i = 0; i < num; i++)
    {
        cin>>elements[i];
    }
    int size=sizeof(elements)/sizeof(elements[0]);
    special(elements,size);
}
void special(int elements[],int size){
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (i==0 || i%2==0)
        {
         if (elements[i]%2 != 0)
         {
            count++;
         }   
        }
        else{
            if (elements[i]%2 == 0)
            {
                count++;
            }
            
        }
        
    }
    if(count==0){
        cout<<"The array is special";
    }
    else{
        cout<<"The arrayis not special";
    }
    
    
}