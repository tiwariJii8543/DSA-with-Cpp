#include<iostream>
using namespace std;

int check(string str,int low,int high){
    if(low>=high){
        return 1;
    }
    if(str[low]!=str[high]){
        return 0;
    }
    return check(str,low+1,high-1);
}
int main(){
    string str;
    cout<<"enter string: ";
    cin>>str;
    int ans=check(str,0,str.size()-1);
    if(ans!=0){
        cout<<"Pallindrom";
    }else{
        cout<<"not pallindrom";
    }
}