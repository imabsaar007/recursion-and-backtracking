#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n){
    if (n == 0){
        return 0;
    }
    int digit = n % 10;
    n = n / 10;
    int ans = sumOfDigits(n);
    return digit + ans;
}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout<< "Sum of Digits is : "<< sumOfDigits(n)<<endl;
    return 0; 
}