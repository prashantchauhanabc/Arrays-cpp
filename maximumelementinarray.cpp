#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,8,1,9,2,-4,-9,-1};
    int n = sizeof(arr)/4;
    int max = INT_MIN;
    for(int i =1; i<=n; i++){
        if(arr[i] > max)
        max = arr[i];
    }
    cout<<max<<endl;

}