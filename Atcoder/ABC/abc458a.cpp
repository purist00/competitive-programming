#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W;
    cin>>H>>W;
    for (int i = 0; i <=H; i++) {
        for (int j = 0; j <=W; j++) {
            int cnt = 0;
            if(i>1) cnt++;
            if(i<H) cnt++;
            if(j>1) cnt++;
            if(j<W) cnt++;
            cout<<cnt<<(j==W ?"":" ");
        }
        cout<<'\n';
    }
    
    return 0;
}  