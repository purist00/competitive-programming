#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

void solve() {
    int N;cin>>N;
    vector<ll> v(N);
    for (int i = 0; i < N; i++) {
        cin>>v[i];
    }
    int current_sum = v[0];
    int best_sum = v[0];
    for (int i = 0; i < N; i++)
    {
        current_sum = max(v[i],current_sum+v[i]);
        best_sum = max(best_sum,current_sum);
    }
    cout<<best_sum<<'\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}