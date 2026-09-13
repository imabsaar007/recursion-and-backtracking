#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void solve(vector<int> &arr, int idx, vector<int> &temp){
    if (idx >= arr.size()){
        ans.push_back(temp);
        return;
    }
    solve(arr,idx+1,temp);
    temp.push_back(arr[idx]);
    solve(arr,idx+1,temp);
    temp.pop_back();
}
vector<vector<int>> subsets(vector<int> &arr){
    vector<int> temp;
    solve(arr,0,temp);
    return ans;
}
int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> result = subsets(arr);
    for (const auto& subset : result) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}