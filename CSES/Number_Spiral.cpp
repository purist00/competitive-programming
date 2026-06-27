#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long row,col;cin>>row>>col;
    long long n = max(row,col);
    long long ans;
    if(n%2 == 0){
        if(row == n){
            ans = n*n-(row-1);
        }
        else{
            ans = (n-1)*(n-1)+row;
        }
    }
    else{
        if(col == n){
            ans = n*n-row+1;
        }
        else{
            ans = (n-1)*(n-1)+col;
        }
    }
    cout<<ans<<'\n'; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}