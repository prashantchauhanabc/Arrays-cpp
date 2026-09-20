#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows:";
    cin>>m;
    cout<<"Enter cols: ";
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n,0));
    for(int i=0; i<m ; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }                                               //m= (row) har ek row me vector daal diya
}
