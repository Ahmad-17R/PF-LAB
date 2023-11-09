#include<iostream>
using namespace std;

float max(float element[],int size);
main(){
    int num;
    cout<<"Enter the number of elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" numbers, one per line: "<<endl;
    float element[num];
    for (int i = 0; i < num; i++)
    {
        cin>>element[i];
    }
    int size =sizeof(element)/sizeof(element[0]);
    int result=max(element,size);
    cout<<"The largest number entered is: "<<result;


    
}
float max(float element[],int size){
    int gr=0;
    for (int i = 0; i < size ; i++)
    {
        if (element[i]>gr)
        {
            gr=element[i];
        }
        
    }
    return gr;
}