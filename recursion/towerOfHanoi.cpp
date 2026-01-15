#include<iostream>
using namespace std;

void toh(int n,int source,int help,int dest){
    if(n==1){
        cout<<"move disk "<<n<<" from "<<source<<" to "<<dest<<endl;
        return;
    }
    toh(n-1,source,dest,help);
    cout<<"move disk "<<n<<" from "<<source<<" to "<<dest<<endl;
    toh(n-1,help,source,dest);
}
int main(){
    int n=3,source=1,dest=2,help=3;
    toh(n,source,help,dest);
}