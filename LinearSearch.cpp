#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/4;
    int target = 5;
    bool flag = false;
    for(int i =1; i<n; i++){
        if(arr[i] == target){
            flag = true;
            break;
        }
    }
    if(flag == true){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }

}