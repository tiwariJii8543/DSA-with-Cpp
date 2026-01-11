#include<iostream>
using namespace std;

string reverse(string str,int low,int high){
    if(low>=high){
        return str;
    }
    swap(str[low],str[high]);
    return reverse(str,low+1,high-1);
}
int main(){
    string str="jaiShreeMahakal";
    str=reverse(str,0,str.size()-1);
    cout<<str;
}