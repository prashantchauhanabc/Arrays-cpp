#include<iostream>
#include<vector>
using namespace std;
    vector<int> twosum(vector<int>& arr,int target){
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            for(int j =i+1; j<n; j++){
                if(arr[i]+arr[j]==target){
                    return{i,j};
                }
            }
        }
        return{};
    }
int main(){
    vector<int> arr = {2,7,11,15};
    int target =9;
    vector<int> ans = twosum(arr,target);
    cout<<"[" << ans[0] <<" , "<<ans[1] <<"]";
    return 0;
}