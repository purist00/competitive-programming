
#include <bits/stdc++.h>
using namespace std;

#define ll  long long int
#define ld  long double
#define vl  vector<ll>
#define vvl vector<vl>
#define vpr vector<pr>
#define vs  vector<string>
#define pr  pair<ll,ll>
#define mset multiset
#define umap unordered_map
#define uset unordered_set
#define pus push_back
#define in insert
#define ff first
#define ss second

static mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ost tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fbo(n) find_by_order(n)  // kth element
#define ook(n) order_of_key(n)   // count of < n

#define i(n)        ll n; cin >> n
#define str(str)    string str; cin >> str;
#define sz(x)       (ll)(x).size()
#define all(x)      x.begin(), x.end()
#define srt(x)      sort(all(x))
#define srtr(x)     sort(all(x), greater<>())
#define rev(x)      reverse(x.begin(), x.end())
#define nextP(x)    next_permutation(all(x))
#define Vmin(x)     *min_element(all(x))
#define Vmax(x)     *max_element(all(x))
#define Vsum(x)     accumulate(all(x), 0ll)
#define lowB(x,n)   (lower_bound(all(x),n) - (x).begin())
#define upB(x,n)    (upper_bound(all(x),n) - (x).begin())
#define cnt(x,n)    count(all(x), n)

#define f(i, n)      for(ll i = 0; i < n; i++)
#define fb(i, n)     for(ll i = n - 1; i >= 0; i--)
#define f1(i, n)     for(ll i = 1; i < n; i++)
#define fl(x, y, z)   for(ll x = y; x <= z; x++)

#define nl          cout << "\n"
#define endl        "\n"
#define ya          cout << "Yes"
#define na          cout << "No"
#define prsn(n)     fixed << setprecision(n)
#define input(v)    f(i, sz(v)) cin >> v[i]

template <class T>
void _print(const T &x) { cout << x; }
template <class T, class U>
void _print(const pair<T,U> &p) { cout << "("; _print(p.first); cout << ", "; _print(p.second); cout << ")"; }
template <class T>
void _print(queue<T> q) { vector<T> tmp; while(!q.empty()) { tmp.push_back(q.front()); q.pop(); } _print(tmp); }
template <class T>
void _print(const vector<T> &v) 
{ 
    cout << "["; for(ll i = 0; i < sz(v); i++) { _print(v[i]); if(i + 1 < sz(v)) cout << ", "; } cout << "]"; 
}
template<class T>
void _print(const multiset<T> &s) 
{ 
    cout << "{"; int i = 0; for(auto &x : s) { _print(x); if(i++ < sz(s) - 1) cout << ", "; } cout << "}"; 
}
template <class T>
void _print(const set<T> &s) 
{ 
    cout << "{"; int i = 0; for(auto &x : s) { _print(x); if(i++ < sz(s) - 1) cout << ", "; } cout << "}"; 
}
template <class K, class V>
void _print(const map<K,V> &mp) 
{ 
    cout << "{"; int i = 0; for (auto &p : mp) { _print(p.first); cout << ": "; _print(p.second); 
    if(i++ < sz(mp) - 1) cout << ", "; } cout << "}"; 
}
template <class T>
void _print(stack<T> s) 
{ 
    vector<T> tmp; while(!s.empty()) { tmp.push_back(s.top()); s.pop(); } reverse(tmp.begin(), tmp.end()); _print(tmp); 
}
template <class T>
void _print(const tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update> &s)
{
    cout << "{"; int i = 0; for(auto &x : s) { _print(x); if(i++ < (int)s.size()) cout << ", "; } cout << "}";
}
#define prt(v) for(auto i : v) cout << i << ' ';

#ifndef ONLINE_JUDGE
#define dbg(x) cout << #x << ": "; _print(x); cout << endl;
#else
#define dbg(x)
#endif

const ld pi = 3.141592653589793238;
const ll INF = 2e18;
const ll MOD = 1e9 + 7; // 998244353;

//.............................................................................................................................

/*

*/

struct Mint
{
    static const ll MOD = 998244353;
    ll value;
    Mint() : value(0) {}
    Mint(ll v) : value(v % MOD) { if (value < 0) value += MOD; }

    Mint operator + (const Mint& o) const { ll c = value + o.value; return Mint(c >= MOD ? c - MOD : c); }
    Mint operator - (const Mint& o) const { ll c = value - o.value; return Mint(c < 0 ? c + MOD : c); }
    Mint operator * (const Mint& o) const { ll c = (value * o.value) % MOD; return Mint(c < 0 ? c + MOD : c); }
    Mint operator / (const Mint &other) const { return *this * inv(other); }
    Mint& operator += (const Mint& o) { value = (value + o.value >= MOD) ? value + o.value - MOD : value + o.value; return *this; }
    Mint& operator -= (const Mint& o) { value = (value - o.value < 0) ? value - o.value + MOD : value - o.value; return *this; }
    Mint& operator *= (const Mint& o) { value = (value * o.value) % MOD; if(value < 0) value += MOD; return *this; }
    Mint& operator /= (const Mint &other) { *this *= inv(other); return *this; }

    Mint operator + (ll num) const { return *this + Mint(num); }
    Mint operator - (ll num) const { return *this - Mint(num); }
    Mint operator * (ll num) const { return *this * Mint(num); }
    Mint operator / (ll num) const { return *this / Mint(num); }
    Mint& operator += (ll num) { return *this += Mint(num); }
    Mint& operator -= (ll num) { return *this -= Mint(num); }
    Mint& operator *= (ll num) { return *this *= Mint(num); }
    Mint& operator /= (ll num) { return *this /= Mint(num); }

    Mint operator - () const { return Mint(value ? MOD - value : 0); }

    static Mint exp(Mint base, ll e) 
    {
        Mint r = 1, x = base;
        while(e) { if(e & 1) r *= x; x *= x; e >>= 1; }
        return r;
    }

    static Mint inv(Mint a) { return exp(a, MOD - 2); }

    bool operator == (const Mint& o) const { return value == o.value; }
    bool operator != (const Mint& o) const { return value != o.value; }
    bool operator < (const Mint& o) const { return value < o.value; }
    bool operator > (const Mint& o) const { return value > o.value; }
    bool operator >= (const Mint& o) const { return value >= o.value; }
    bool operator <= (const Mint& o) const { return value <= o.value; }

    explicit operator bool() const { return value != 0; }
    explicit operator ll() const { return value; }

    friend Mint operator * (ll lhs, const Mint& rhs) { return Mint(lhs % MOD) * rhs; }
    friend istream& operator >> (istream& in, Mint& n) { ll x; in >> x; n = Mint(x); return in; }
    friend ostream& operator << (ostream& out, const Mint& n) { return out << n.value; }
};

vector<Mint> fact, inv_fact;
void compute(ll n)
{
    fact.assign(n + 1, 1);
    inv_fact.assign(n + 1, 1);

    for(int i = 1; i <= n; i++)
        fact[i] = fact[i - 1] * i;

    inv_fact[n] = Mint::inv(fact[n]);

    for(int i = n - 1; i >= 0; i--)
        inv_fact[i] = inv_fact[i + 1] * (i + 1);
}

Mint nCr(int n, int r)
{
    if(r < 0 || r > n) return Mint(0);
    return fact[n] * inv_fact[r] * inv_fact[n - r];
}

void solve()
{
    // 321 or 123
    i(x); i(y); i(z);
    Mint ans = 0;
    for (ll i = 1; i <= min(x, y + 1); i++) {
        Mint p = nCr(x - 1, i - 1);
        p *= nCr(y + 1, i);
        p *= nCr(y + z - i, z);
        ans += p;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    compute(3e6 + 10);

    ll t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}