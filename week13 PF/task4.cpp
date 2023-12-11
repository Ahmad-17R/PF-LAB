#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void savetofile(string name[],int age[],int matric[],int fsc[],int ecat[],string filename,int j);
void studentdetails(string name[],int age[],int matric[],int fsc[],int ecat[],int &i);

main(){
    string name[100];
    int age[100];
    int matric[100];
    int fsc[100];
    int ecat[100];
    int i=0;
    string filename="task4.txt";
    studentdetails(name,age,matric,fsc,ecat,i);
    savetofile(name,age,matric,fsc,ecat,filename,i);

}
void studentdetails(string name[],int age[],int matric[],int fsc[],int ecat[],int &i){
    string str="Yes";
    while (str=="Yes")
    {
        cout<<"Enter student's name: ";
        cin>>name[i];
        cout<<"Enter student's age: ";
        cin>>age[i];
        cout<<"Enter student's Matric marks: ";
        cin>>matric[i];
        cout<<"Enter student's fsc marks: ";
        cin>>fsc[i];
        cout<<"Enter student's Ecat marks: ";
        cin>>ecat[i];
        cout<<"Enter No to Stop or Yes to Continue Enter: ";
        cin>>str;
        i++;
    }
    
}
void savetofile(string name[],int age[],int matric[],int fsc[],int ecat[],string filename,int j){
    fstream file;
    file.open(filename,ios::out);
    for (int i = 0; i < j; i++)
    {
        file<<"Name: "<<name[i]<<endl;
        file<<"Age: "<<age[i]<<endl;
        file<<"Matric Marks: "<<matric[i]<<endl;
        file<<"Fsc Marks: "<<fsc[i]<<endl;
        file<<"Ecat Marks: "<<ecat[i]<<endl;
        file<<endl;
    }
    

}