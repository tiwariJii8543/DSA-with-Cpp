#include <iostream>
#include<vector>
using namespace std;

vector< vector<int> > rowColSum(int row, int col){
    vector< vector<int> > arr={{0,1,2},{3,4,5},{6,7,8}};
    // printing row wise sum
    for (int i = 0; i < 3; i++) {
        cout <<" row "<<i+1<<" : ";
        int sum=0;
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
            sum=sum+arr[i][j];
        }
        cout <<"  sum is: "<<sum<< endl;
    }
    // printing column wise sum
    for (int j = 0; j < 3; j++) {
        cout <<" col "<<j+1<<" : ";
        int sum=0;
        for (int i = 0; i < 3; i++) {
            cout << arr[i][j] << " ";
            sum=sum+arr[i][j];
        }
        cout <<"  sum is: "<<sum<< endl;
    }
    return arr;
}
int main(){
    int row=3,col=3;
    rowColSum(row,col);
}