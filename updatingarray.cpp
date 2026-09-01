#include<iostream>
using namespace std;
int main(){
    int marks[] = {74,96,91,57,62};
    cout<<marks[2]<<endl;
    marks[2] =23; //update
    cin>>marks[3];
    cout<<marks[3]<<endl;
    cout<<marks[2]<<endl;
}