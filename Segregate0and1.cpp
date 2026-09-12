#include<iostream>
#include<vector>
using namespace std;
void segregate0and1(vector<int>& arr){
    for(int ele : arr) cout<<ele<<" ";
}
void print(vector<int>& arr){
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int>arr = {0,1,0,1,0,0,1,1,1,0};
    int i = 0 , j = arr.size()-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    print(arr);


}
