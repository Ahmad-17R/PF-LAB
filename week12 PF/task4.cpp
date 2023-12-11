#include<iostream>
using namespace std;

main(){
    int rowsize;
    cout<<"Enter row size: ";
    cin>>rowsize;
    cout<<"Enter the elements of the matrix:"<<endl;
    int elements[rowsize][3];
    int sum=0;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>elements[i][j];
            sum=sum+elements[i][j];
        }
        
    }
    cout<<"The sum of elements in the matrix is: "<<sum;
    
}