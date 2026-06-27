#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    set<int>num;
    for (int i = 0; i <n; i++) {
        int c;cin>>c;
        num.insert(c);
    }
    for (int j = 1; j<=n; j++) {
        if(!num.count(j)){
            cout<<j<<'\n';
            break;
        }
    }
    return 0;
}