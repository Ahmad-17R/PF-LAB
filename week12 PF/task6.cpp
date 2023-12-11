#include<iostream>
using namespace std;

main(){
string elements[5][5]={{".",".",".","*","*"},
                        {".","*",".",".","."},
                        {".","*",".",".","."},
                        {".","*",".",".","."},
                        {".",".","*","*","."}};  
    int A=0,B=1,C=2,D=3,E=4;
    string ans;
    cout<<"Enter coordinates to fire torpedo (e.g.,A1,B3,E5): ";
    cin>>ans;
    int row,col;
    if (ans[0]=='A')
    {
      row=A;  
    }
     else if (ans[0]=='B')
    {
      row=B;  
    }
    else if (ans[0]=='C')
    {
        row=C;
    }
    else if (ans[0]=='D')
    {
        row=D;
    }
       else if (ans[0]=='E')
    {
        row=E;
    }
        if (ans[1]=='1')
    {
      col=0;  
    }
     else if (ans[0]=='2')
    {
      col=1;  
    }
    else if (ans[0]=='3')
    {
        col=2;
    }
    else if (ans[0]=='4')
    {
        col=3;
    }
       else if (ans[0]=='5')
    {
        col=4;
    }
    string result;
    if (elements[row][col]==".")
    {
        result="splash";
    }
  //  cout<<row<<col;
   else 
   {
       result="BOOM";
   }
    cout<<"Result: "<<result;
    
    
    
    
    
}
