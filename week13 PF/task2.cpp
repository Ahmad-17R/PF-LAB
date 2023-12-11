#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int countlines(string filename);

main(){
    string filename="Task2.txt";
    int lines=0;
    lines=countlines(filename);
    cout<<"Total number of lines: "<<lines;

}
int countlines(string filename){
    string line;
    int count=0;
    fstream file;
    file.open(filename,ios::in);
    while (!file.eof())
    {
        getline(file,line);
        for (int i = 0; line [i]!='\0'; i++)
        {
            count++;
            /* code */
        }
        
        
    }
    file.close();
    return count;}