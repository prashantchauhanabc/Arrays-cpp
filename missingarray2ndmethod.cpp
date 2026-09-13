#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int missingnumber(vector<int>& arr){
        int n = arr.size();
        vector<bool> flag(n+1,false);
        for(int i =0; i<n; i++){
            flag[arr[i]]=true;
        }
        for(int i=0; i<=n; i++){
            if(flag[i]==false) return i;
        }
        return{};

    }
};
int main(){
    vector<int> arr = {5,4,1,6,0,2};
    solution s;
    cout<< s.missingnumber(arr)<<endl;
    return 0;
}
