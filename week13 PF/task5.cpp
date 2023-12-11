#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void writefile(string name[],int adnum[],int percent[],string write,int i);
void readfile(string name[],int adnum[],int percent[],int &i,string read);
main(){
    string read="task5.txt";
    string write="topperstudents.txt";
    string name[10];
    int  adnum[10];
    int  percent[10];
    int i=0;
    readfile(name,adnum,percent,i,read);
    writefile(name,adnum,percent,write,i);
}
void readfile(string name[],int adnum[],int percent[],int &i,string read){
    fstream file;
    file.open(read,ios::in);
    while (!file.eof())
    {
        file>>name[i];
        file>>adnum[i];
        file>>percent[i];
        i++;
        
    }
    file.close();
}
void writefile(string name[],int adnum[],int percent[],string write,int count){
    fstream file;
    file.open(write,ios::out);
    for (int i = 0; i < count; i++)
    {
        if (percent[i]>0)
        {
           file<<"Name: "<<name[i]<<endl;
        file<<"Admission Number: "<<adnum[i]<<endl;
        file<<"Percentage: "<<percent[i]<<endl;
        file<<endl;  
        }
        
    }
    
       
    
    file.close();
}
