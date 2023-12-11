#include<iostream>
using namespace std;
string check(int rows);
bool checkidentity(int elements[][3],int rows);

main(){
    int rows=3;
    int columns=3;
    string str=check(rows);
    if (str=="")
    {
       cout<<"The entered matrix is an identity matrix."; 
    }
    else{
        cout<<"The entered matrix is NOT an identity matrix.";
    }
   

}
string check(int rows){
    int elements[rows][3];
    string str;
    cout<<"Enter the elements of the matrix:"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter the element at position ["<<i<<"]["<<j<<"]: ";
            cin>>elements[i][j];
        }
        
    }
    cout<<"The matrix you entered is :"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<elements[i][j]<<"\t";
        }
        cout<<endl;  
    }
    bool alpha=checkidentity(elements,rows);
    if (alpha==true)
    {
        str=="";
    }
    else{
        str="NOT";
    }
    return str;
    
    
}
bool checkidentity(int elements[][3],int rows){
    bool result=true;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if (i!=j)
           {
            if (elements[i][j] != 0)
            {
               result=false;
               break;
            }
            
           }
           if (i==j)
           {
            if (elements[i][j] != 1)
            {
                result=false;
                break;
            }
            
           }
           
            
        }
        
    }
    return result;
}