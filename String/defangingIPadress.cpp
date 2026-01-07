#include<iostream>
using namespace std;

int main(){
    string IP;
    cout<<"Enter IP adress : ";
    cin>>IP;
    int idx=0;
//     while(idx<IP.size()){
//         if(IP[idx]=='.'){
//             IP.replace(idx, 1, "[.]");  //__pos – Index of first character to replace.
//                                         // __n1 – Number of characters to be replaced.
//                                         // C string to insert.
//             idx += 3;
//         }
           
//         idx++;
//     }............(time compl. O(n*n))

    string ans;
    while(idx<IP.size()){
        if(IP[idx]=='.'){
            ans=ans+"[.]";    
        }else{
            ans=ans+IP[idx];
        }
        idx++;
    }
    cout<<ans;
}     
// time complexity O(n)

