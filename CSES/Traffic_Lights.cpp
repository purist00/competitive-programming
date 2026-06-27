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
#define const int INF = 1e9;
#define const int LLINF = 4e18;
#define const double EPS = 1e-9;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
const int N = 2e5+5;
using namespace std;

void solve() {
   int x,n;cin>>x>>n;
   int largest = -1;
   int arr[n];
   set<int> s;
   multiset<int>gaps;
   for(auto &x:s){
    int y;cin>>y;
    s.insert(y);
    s.insert(0);
    s.insert(x);
    gaps.insert(x);

    for (int i = 0; i < n; i++) {
        int p;cin>>p;
    
    auto right = s.upper_bound(p);
    auto left = prev(right);
    gaps.erase(gaps.find(*right-*left));
    gaps.insert(p-*left);
    gaps.insert(*right-p);
    s.insert(p);
    cout<< *gaps.rbegin()<<' ';
    }
   }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

