#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int countalphabet(string filename);

main(){
    string filename="Task3.txt";
    int frequency=0;
    frequency=countalphabet(filename);
    cout<<"Total number of characters: "<<frequency;

}
int countalphabet(string filename){
    fstream file;
    string line;
    int count=0;
    file.open(filename,ios::in);
    while (!file.eof())
    {
        getline(file,line);
        for (int i = 0; line[i]!='\0'; i++)
        {
            if (line[i]=='s' || line[i]=='S')
            {
                count++;
            }
            
        }
        
    }
    file.close();
    return count;

}