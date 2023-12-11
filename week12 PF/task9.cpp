#include<iostream>
using namespace std;

main(){
    int rows;
    cout<<"Enter the number of rows for the array: ";
    cin>>rows;
    int elements[rows][3];
    cout<<"Enter the elements of the array: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          cout<<"Enter element at position["<<i<<"]["<<j<<"]: ";
          cin>>elements[i][j];
        }
        
    }
    int count1=0,count2=0;
    for (int i = 0; i < rows; i++)
    {
        int a=elements[i][0];
        int b=elements[i][1];
        int c=elements[i][2];
        int d=i;
        
            for (int j = 0; j < rows; j++)
            {
                if (j==d)
                {
                   
                    continue;
                }
                
                if (a==elements[j][0] && b==elements[j][1] && c==elements[j][2] )
                {
                count1++;

                 } 
            }
            
          
           if (count1>0)
           {
            count2=count2+count1;
            count1=0;
           }
           count1=0; 
        
    }
    cout<<"The count of identical rows in the array is: "<<count2;
    
}