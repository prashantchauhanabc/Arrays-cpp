#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> & arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();
    print (arr);
    for(int j=0; j<n-1; j++){
       int min = arr[j] , min_Index = j;
    for(int i=j; i<n; i++){
        if(arr[i]  < min){
            min = arr[i];
            min_Index = i;
        }
    }
    swap(arr[j],arr[min_Index]);
    }
    print(arr);
}