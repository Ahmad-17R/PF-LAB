#include<iostream>
using namespace std;
void combine(int elements1[],int elements2[],int size1,int size2);

main(){
    int num1,num2;
   
    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>num1;
    cout<<"Enter "<<num1<<" elements for the first array, one per line:"<<endl;
    int elements1[num1];
     for (int  i = 0; i < num1; i++)
    {
        cin>>elements1[i];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>>num2;
    cout<<"Enter "<<num2<<" elements for the second array, one per line:"<<endl;
    int elements2[num2];
    for (int i = 0; i < num2; i++)
    {
        cin>>elements2[i];
    }
    int size1=sizeof(elements1)/sizeof(elements1[0]);
    int size2=sizeof(elements2)/sizeof(elements2[0]);
    combine(elements1,elements2,size1,size2);
    
}
void combine(int elements1[],int elements2[],int size1,int size2){
    cout<<"Resulting array: [";
    int i=0,j=0;
  
    while (i<size1 && j<size2)
    {
       if (elements1[i]<elements2[j])
       {
        cout<<elements1[i]<<", ";
        i++;
       }
       else 
       {
        cout<<elements2[j]<<", ";
        j++;
       }
       
        
    }
    
        
    
    cout<<elements1[i]<<"]";
    
}