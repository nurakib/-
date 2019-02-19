#include <bits/stdc++.h>
using namespace std;
long long maxProd(long long arr[], int n){
    long long sum = 1, max_val = 0;
    //checking all possible cases
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            sum = sum * arr[j];
            if(sum > max_val) max_val = sum;
        }
        sum = 1;
    }
    return max_val;
}
int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, caseno = 0;
    long long ans, num[105];
    while(cin >> n){
        for(int i = 0; i < n; i++){
           cin >> num[i];
        }
        ans = maxProd(num, n);
        cout << "Case #" << ++caseno << ": The maximum product is " << ans << ".\n\n";
    }
    return 0;
}
