#include<iostream>
using namespace std;
float dam(string ,string ,int,int);
main(){
  string mytype,optype;
  float attack,defense;  
  cout<<"Enter your type: ";
  cin>>mytype;
   cout<<"Enter opponent's  type: ";
  cin>>optype;
  cout<<"Enter your attack power: ";
  cin>>attack;
  cout<<"Enter opponent's defense: ";
  cin>>defense;

  float result=dam(mytype,optype,attack,defense);
  cout<<result;
}

float dam(string mytype,string optype,int attack,int defense){
    float effect;
    if(mytype=="fire" && optype=="grass"){
        effect=2;
    }
    else if(mytype=="fire" && optype=="water"){
        effect=0.5;
    }
     else if(mytype=="fire" && optype=="electric" || mytype=="electric" && optype=="fire"){
        effect=1;
    }
      else if(mytype=="water" && optype=="grass"){
        effect=0.5;
    }
    
    else if(mytype=="grass" && optype=="fire"){
        effect=0.5;
    }
      else if(mytype=="water" && optype=="electric"){
        effect=0.5;
    }
     else if(mytype=="grass" && optype=="electric" ){
        effect=1;
    }
    float damages=attack/defense;
    damages=damages*50*effect;
    return damages;
}
