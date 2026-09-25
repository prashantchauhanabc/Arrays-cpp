#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,6,5,7,8,9};
    int n = sizeof(arr)/4;
    bool flag = true;
    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag == true ){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}       