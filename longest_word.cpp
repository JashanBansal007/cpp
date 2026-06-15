#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);          

    string longest_word = "";
    string current_word = "";

    for(char c : s){
        if(c != ' '){
            current_word += c;
        } else {
            if(current_word.length() > longest_word.length()){
                longest_word = current_word;
            }
            current_word = "";
        }
    }

    
    if(current_word.length() > longest_word.length()){
        longest_word = current_word;
    }

    cout << longest_word.length() << endl;  
}