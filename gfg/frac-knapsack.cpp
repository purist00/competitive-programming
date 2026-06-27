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


bool compare(vector<int> &a,vector<int> &b){
    double a1 = (1.0*a[0])/a[1];
    double b1 = (1.0*b[0])/b[1];
    return a1>b1;
}

double fractionalKnapsack(vi &val, vi &wt, int cap){
    int n = val.size();
    vvi items(n,vector<int>(2));
    for (int i = 0; i < n; i++) {
        items[i][0] = val[i];
        items[i][1] = wt[i];
    }
    sort(items.begin(),items.end());
    double res = 0.0;
    int currCap = cap;
    for (int i = 0; i <n; i++) {
        if(items[i][1]<=currCap){
            res+=items[i][0];
            currCap-=items[i][1];
        }
        else{
            //fraction
            res+=(1.0*items[i][0]/items[i][1]*currCap);
                break;
        }
    }
    return res;
}

void solve() {
    vi val;for (int  i = 0; i < val.size(); i++)
    {
        cin>>val[i];
    }
    vi wt;for (int i = 0; i < wt.size(); i++) {
        cin>>wt[i];
    }
    int cap=50;
    cout<<fractionalKnapsack(val,wt,cap)<<endl;
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}