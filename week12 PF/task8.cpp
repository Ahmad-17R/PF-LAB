#include<iostream>
using namespace std;
void magic(int elements[][5],int rows);

main(){
    int rows;
    cout<<"Enter row size: ";
    cin>>rows;
    int elements[rows][5];
    magic(elements,rows);

}
void magic(int elements[][5],int rows){
    cout<<"Enter the elements of the matrix:"<<endl;
    for (int i = 0; i < rows; i++)
    {
    for (int col = 0; col < 5; col++)
    {
        cout<<"Enter element at position ["<<i<<"]["<<col<<"]: ";
        cin>>elements[i][col];
    }

    }
    cout<<endl;
    cout<<"Original Matrix:"<<endl;
        for (int i = 0; i < rows; i++)
    {
    for (int col = 0; col < 5; col++)
    {
       cout<<elements[i][col]<<" ";
    }
    cout<<endl;

    }
    int greater=0;
    int big=0;
    for (int i = 0; i < 5; i++)
    {
        int sum=0;
    for (int col = 0; col < rows; col++)
    {
        sum=sum+elements[col][i];
        
    }
    if (sum>greater)
       {
        greater=sum;
        big=i;
       }

    }
    int temp=0;
    if (big!=0)
    {
       for (int i = 0; i < rows; i++)
       {
        temp=elements[i][0];
        elements[i][0]= elements[i][big];
        elements[i][big]=temp;
       }
        
    }
    cout<<endl;
    cout<<"Matrix after largest column moved to first:"<<endl;
    for (int i = 0; i < rows; i++)
    {
    for (int col = 0; col < 5; col++)
    {
       cout<<elements[i][col]<<" ";
    }
    cout<<endl;

    }
    
}