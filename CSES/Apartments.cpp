#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;cin>>n>>m>>k;
    vector<int>app(n);
    vector<int>apart(m);
    for(int &x:app)cin>>x;
    for(int &x:apart)cin>>x;
    sort(app.begin(),app.end());
    sort(apart.begin(),apart.end());
    int i=0,j=0;
    int ans = 0;
    while(i<n && j<m){
        if(apart[j]<app[i]-k){
            j++;
        }
        else if (apart[j]>app[i]+k){
            i++;
        }
        else{
            ans++;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}