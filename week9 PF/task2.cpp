#include<iostream>
using namespace std;
void displaylocation(string);

main(){
     string word="1";
    cout<<"Enter a word: ";
    cin>>word;
    displaylocation(word);


}
void displaylocation(string word){
    cout<<"Reversed String: ";
    for ( int x = word.length()-1; x>=0; x--)
    {
     cout<<word[x];  
    }
    
}