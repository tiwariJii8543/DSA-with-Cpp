#include<iostream>
using namespace std;

int main(){
    int Num;
    cout<<"enter the no.(day 1 to day 7): ";
    cin>>Num;
    // if(Num==1){
    //     cout<<"Day 1 = SUNDAY";
    // }else if(Num==2){
    //     cout<<"Day 2 = MONDAY";
    // }else if(Num==3){
    //     cout<<"Day 3 = TUESDAY";
    // }else if(Num==4){
    //     cout<<"Day 4 = WEDNESDAY";
    // }else if(Num==5){
    //     cout<<"Day 5 = THURSDAY";
    // }else if(Num==6){
    //     cout<<"Day 6 = FRIDAY";
    // }else if(Num==7){
    //     cout<<"Day 7 = SATURDAY";
    // }else{
    //     cout<<"No is out of range.";
    // }
    switch(Num){
        case 1:
        cout<<"SUNDAY";
        break;
        case 2:
        cout<<"MONDAY";
        break;
        case 3:
        cout<<"TUESDAY";
        break;
        case 4:
        cout<<"WEDNESDAY";
        break;
        case 5:
        cout<<"THURSDAY";
        break;
        case 6:
        cout<<"FRIDAY";
        break;
        case 7:
        cout<<"SATURDAY";
        break;
        default:
        cout<<"Please give number between 1 to 7:";
        break;


    }
}