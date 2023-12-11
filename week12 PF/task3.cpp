#include<iostream>
using namespace std;
void printarray(int array[][5],int rowsize,int i);

main(){
    const int rowsize=5;
    const int colsize=5;
    string color[5]={"Red","Black","Brown","Blue","Gray"};
    int index;
    for (int i = 0; i < 5; i++)
    {
        if (color[i]=="Red")
        {
            index=i;
        }
        
    }
    
    int cars[rowsize][colsize]={{10,7,12,10,4},
                    {18,11,15,17,2},
                    {23,19,12,16,14},
                    {7,12,16,0,2},
                    {3,5,6,2,1}};
  printarray(cars,rowsize,index);

}
void printarray(int array[][5],int rowsize,int index){

    for (int row = 0; row <rowsize ; row++)
    {
        for (int col = 0; col < 5; col++)
        {
           if (row==index)
           {
             cout<<array[row][col]<<"\t";
           }
           
        }
      
    }
    
}
