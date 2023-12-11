#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int countlines(string filename);

main(){
    string filename="taask1.txt";
    int lines=0;
    lines=countlines(filename);
    cout<<"Total number of lines: "<<lines<<endl;

}
int countlines(string filename){
    string line;
    int count=0;
    fstream file;
    file.open(filename,ios::in);
    while (!file.eof())
    {
        getline(file,line);
        count++;
    }
    file.close();
    return count;}