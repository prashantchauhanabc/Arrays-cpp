// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v = {4,1,2,3,5};
//     for(int ele : v){            //for each loop
//         cout<<ele<<" ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {4,1,2,3,5};
    for(int i=0; i<v.size(); i++){
        if(v[i]%2==0) v[i] *= 2;
        else v[i] *= v[i];
    }
    for(int ele : v){
        cout<<ele<<" ";
    }
}