#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector< vector<int> > matrix(int row, int col){
    vector< vector<int> > mat(row, vector<int>(col));
    cout<<"enter the element in matrix: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Printing matrix :"<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }
    return mat;
}
int main(){
    int row,col;
    cout<<"enter the no of rows:";
    cin>>row;
    cout<<"enter the no of col:";
    cin>>col;
    matrix(row,col);
}