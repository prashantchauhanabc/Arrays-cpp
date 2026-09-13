#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int missingnumber(vector<int>& arr){
        int sum =0;
        int Missing_number;
        int n = arr.size();
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        int Nsum =n*(n+1)/2;
        Missing_number = Nsum - sum;
        return Missing_number;

    }
};
int main(){
    vector<int> arr = {5,4,1,6,0,2};
    solution s;
    cout<< s.missingnumber(arr)<<endl;
    return 0;
}
