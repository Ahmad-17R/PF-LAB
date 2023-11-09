#include<iostream>
using namespace std;
void check(int num);

main(){
    int num;
    cout<<"Enter the number of elements: ";
    cin>>num;
    if (num<=0)
    {
        cout<<"Invalid input.Number of elements must be greater than 0.";
    }
    else{
        cout<<"Enter "<<num<<" numbers, one per line: ";
        check(num);
    }
    
}
void check(int num){
    int array[num-1];
    for (int  i = 0; i < num; i++)
    {
        cin>>array[i];
        for (int j = i-1; j>=0; j--)
        {
            if(array[i]==array[j] && i!=j){
                cout<<"Already Entered: "<<array[i]<<endl;
                break;
            }
            
        }
        
    }
    cout<<"Unique elements:";
    for (int i = 0; i < num; i++)
    {
        for (int j = j-i; j >=0 ; i++)
        {
            if (array[i] == array[j] && i!=j)
            {
                break;
            }
            if(j==0){

                cout<<" "<<array[i];
            }
        }
        
    }
    
    
}


