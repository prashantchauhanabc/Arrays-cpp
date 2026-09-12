#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& arr){
    for(int ele : arr) cout<<ele<<" ";
}
void print(vector<int>& arr){
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    int i =0 , j=arr.size()-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    int k=3;
    i=0 , j=k-1;
    for(int i =0; i<j; i++){
        int temp =arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    int n = arr.size()-1;
    j=n;
    for(int i=k; i<j; i++){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
        j--;
    }
    print(arr);
}