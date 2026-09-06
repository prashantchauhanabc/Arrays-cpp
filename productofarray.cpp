#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/4;
    int multi = 1;
    for(int i =1; i<n; i++){
        multi *= arr[i];
    }
    cout<<"The multiplication of the elements is :";
    cout<<multi<<endl;
}
