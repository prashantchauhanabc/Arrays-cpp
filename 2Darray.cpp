#include<iostream>
using namespace std;
int main(){
    int arr[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    int maxSum=INT_MIN;
    int maxRow = -1;
    for(int i=0; i<3; i++){
        int sum =0;
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            maxRow = i;
        }
    }
    cout<<maxRow<<" "<<maxSum<<" ";
}    