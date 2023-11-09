#include<iostream>
using namespace std;
void displaylocation(char word[]);

main(){
    char word[12];
    cout<<"Enter a word: ";
    cin>>word;
    displaylocation(word);


}
void displaylocation(char word[]){
    for ( int x = 0; word[x] !='\0' ; x++)
    {
     cout<<word[x]<<" found at position "<<x<<endl;   
    }
    
}