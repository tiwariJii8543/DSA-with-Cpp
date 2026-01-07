#include<iostream>
#include<vector>
using namespace std;

bool isPangram(string str){
    vector<bool>ch(26,false);
    int index;
    for(int i=0;i<str.size();i++){
        if('A'<=str[i] && str[i]<='Z'){
            index=str[i]-'A';
        }else if('a'<=str[i] && str[i]<='z'){
            index=str[i]-'a';
        }else{
            continue; //skip symbol etc.
        }
        ch[index]=true;
    }

    for (int i=0; i<26; i++){
        if (ch[i]==false)
            return false;         
    }
    return true;   
}

int main(){
    string str="The quick brown fox jumps over the lazy dog";
    if(isPangram(str)==false){
        cout<<"Not Pangram!!";
    }else{
        cout<<"Pangram!!";
    }
}