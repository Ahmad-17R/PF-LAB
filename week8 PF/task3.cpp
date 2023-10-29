#include<iostream>
using namespace std;
void growth(char,int,int,int);
main(){
   char flower;
   int stemlength,temp,flowernum;
   cout<<"Enter flower shape: ";
   cin>>flower;
   cout<<"Stem length: ";
   cin>>stemlength;
   cout<<"Number of flowers: ";
   cin>>flowernum;
   cout<<"Enter temperature: ";
   cin>>temp;
   growth(flower,stemlength,temp,flowernum);

   }
   void growth(char flower,int stemlength,int temp,int flowernum){
    if(temp>=20 && temp<=30){
        for ( int i = 1; i <= stemlength; i++)
        {   
            for (int j = 1; j <= stemlength; j++)
            {
                cout<<"-";
            }
            
            for (int k = 1; k <=flowernum; k++)
            {
                cout<<flower;
            }
            
        }
        
    }
        else{
        for ( int i = 1; i <= stemlength; i++){
       for (int j = 1; j <=stemlength; j++)
       {
          cout<<"-";
       }  
        }
        cout<<flower;  
    }
    
   }
