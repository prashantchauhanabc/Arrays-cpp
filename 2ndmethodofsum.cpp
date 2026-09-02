#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,13,14,15,16,17,18,19};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i =0; i<=n; i++){
        sum += arr[i];
    }
    cout<<"Sum of elements is : ";
    cout<<sum<<endl;
}