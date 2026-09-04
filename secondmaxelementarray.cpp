#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/4;
    int max = INT_MIN;
    for(int i =1; i<n; i++){
        if(arr[i] > max)
        max = arr[i];
    }
    int smx = INT_MIN;
    for(int i =1; i<n; i++){
        if(arr[i] > smx && arr[i] != max)
        smx = arr[i];
    }
    cout<<max<<" "<<smx<<endl;
}
