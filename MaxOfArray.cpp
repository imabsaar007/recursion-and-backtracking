#include<bits/stdc++.h>
using namespace std;
int maxOfArray(vector<int> arr, int n){
    if (n == 1){
        return arr[0];
    }
    int last = arr[n-1];
    int ans = maxOfArray(arr,n-1);
    return max(last,ans);
}
int main(){
    vector <int> arr = {434,3345,3,54,5,6,57,6,57,34};
    int n = arr.size();
    cout << "Maximum element in the array is: " << maxOfArray(arr, n) << endl;
    return 0;
}