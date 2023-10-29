#include<iostream>
using namespace std;
bool fitting(int height1,int width1,int depth1,int width2,int height2);

main(){
 int height1,width1,depth1,width2,height2;
 cout<<"Enter height of the brick: ";
  cin>>height1;
   cout<<"Enter width of the brick: ";
  cin>>width1;
   cout<<"Enter depth1 of the brick: ";
  cin>>depth1;
   cout<<"Enter height of the hole: ";
  cin>>height2;
   cout<<"Enter width of the hole: ";
  cin>>width2;
  bool result=fitting(height1,width1,depth1,width2,height2);
cout<<result;
}
bool fitting(int height1,int width1,int depth1,int width2,int height2){
  if (height1 == height2 && width1 == width2){
        return true;
    }
    else if (height1 == width2 && width1 == height2){
        return true;
    }
    else if (height1 == height2 && depth1 == height2){
        return true;
    }
    else if (height1 == width2 && depth1 == width2){
        return true;
    }
    else if (width1 == height1 && depth1 == height2){
        return true;
    }
    else if (width1 == width2 && depth1 == width2){
        return true;
    }
    else{
    return false;}

}

