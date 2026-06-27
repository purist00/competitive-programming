/**
 * 
 *  |||| ॐ भैरवय नमः | ॐ सूर्य नमः ||||
 *  |||| यश खंडूजा ||||
 * 
 * */


/*
 *
 *──────────────────────────────────────────────────────────
 *  Local Compile: g++ -DLOCAL -O2 -o sol sol.cpp
 *  (the -DLOCAL flag activates debug + file I/O)
 *
 * ──────────────────────────────────────────────────────────
 */

// #include <atcoder/all>        // uncomment for AtCoder
// using namespace atcoder;      // uncomment for AtCoder

#include <bits/stdc++.h>

using namespace std;
//type aliases
using ll   = long long;
using ull  = unsigned long long;
using ld   = long double;
using pii  = pair<int, int>;
using pll  = pair<ll, ll>;
using vi   = vector<int>;
using vll  = vector<ll>;
using vvi  = vector<vi>;
using vvll = vector<vll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
//CONSTANTS
const ll  INF  = 4e18;
const int iINF = 2e9;
//MACROS
#define rep(i, a, b)  for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)
#define all(x)        begin(x), end(x)
#define rall(x)       rbegin(x), rend(x)
#define pb            push_back
#define eb            emplace_back
#define fi            first
#define se            second
#define sz(x)         (int)(x).size()

/* ====================DEBUG==================== */
//  Activated by compiling with -DLOCAL.
//  Stripped to nothing on the judge — zero overhead.
//
//  Usage:
//    bug(x);           →  [x] = 42
//    bug2(x, y);       →  [x] = 42  [y] = 7
//    bugv(my_vec);     →  [my_vec] = 1 2 3 4
#ifdef LOCAL
#define bug(x)      cerr << "[" << #x << "] = " << (x) << '\n'
#define bug2(x, y)  cerr << "[" << #x << "] = " << (x) \
                         << "  [" << #y << "] = " << (y) << '\n'
#define bugv(v)     cerr << "[" << #v << "] ="; \
                    for (auto _e : (v)) cerr << " " << _e; cerr << '\n'
#else
#define bug(x)
#define bug2(x, y)
#define bugv(v)
#endif

/* ==================== UTILITIES ==================== */
template<class T> bool chmin(T& a, const T& b) { return b < a ? a = b, true : false; }
template<class T> bool chmax(T& a, const T& b) { return a < b ? a = b, true : false; }

// Standalone modpow — useful for quick one-off calculations on CF
// without needing to declare a mint variable.
ll modpow(ll base, ll exp, ll mod) {
    ll res = 1; base %= mod;
    for (; exp > 0; exp >>= 1) {
        if (exp & 1) res = res * base % mod;
        base = base * base % mod;
    }
    return res;
}

/* ==================== GRID ==================== */
//  4-directional: right, left, down, up
//  Uncomment 8-dir when diagonal moves are needed
const int dx4[] = { 0,  0,  1, -1};
const int dy4[] = { 1, -1,  0,  0};
// const int dx8[] = { 0,  0,  1, -1,  1,  1, -1, -1};
// const int dy8[] = { 1, -1,  0,  0,  1, -1,  1, -1};

/* ==================== MODINT ==================== */
//  Self-contained modular int — works on both CF and AtCoder.
//  On AtCoder you can also use ACL's modint after enabling ACL above.
//
//  Usage:
//    const int MOD = 998244353;   ← or 1e9+7, set below
//    using mint = Mint<MOD>;
//    mint a = 3, b = 5;
//    cout << a * b;               ← prints 15, no manual % needed
//    cout << a / b;               ← modular inverse handled automatically
template<int MOD>
struct Mint {
    int v;
    Mint(ll _v = 0) : v(int((_v % MOD + MOD) % MOD)) {}

    Mint& operator+=(const Mint& o) { v += o.v; if (v >= MOD) v -= MOD; return *this; }
    Mint& operator-=(const Mint& o) { v -= o.v; if (v < 0)   v += MOD; return *this; }
    Mint& operator*=(const Mint& o) { v = int((ll)v * o.v % MOD);       return *this; }
    Mint& operator/=(const Mint& o) { return *this *= inv(o); }

    friend Mint operator+(Mint a, const Mint& b) { return a += b; }
    friend Mint operator-(Mint a, const Mint& b) { return a -= b; }
    friend Mint operator*(Mint a, const Mint& b) { return a *= b; }
    friend Mint operator/(Mint a, const Mint& b) { return a /= b; }

    bool operator==(const Mint& o) const { return v == o.v; }
    bool operator!=(const Mint& o) const { return v != o.v; }

    static Mint pow(Mint a, ll b) {
        Mint res = 1;
        for (; b > 0; b >>= 1) { if (b & 1) res *= a; a *= a; }
        return res;
    }
    static Mint inv(const Mint& a) { return pow(a, MOD - 2); }

    friend ostream& operator<<(ostream& os, const Mint& m) { return os << m.v; }
    friend istream& operator>>(istream& is, Mint& m) { ll x; is >> x; m = Mint(x); return is; }
};

// ── Set your MOD here, then uncomment the mint line ──────────────────────────
const int MOD = 998244353;   // swap to 1000000007 when problem says 1e9+7
// using mint = Mint<MOD>;   // uncomment when problem needs mod arithmetic

/* ==================== SOLVE ==================== */
void solve() {
    // write solution here

}

/* ==================== MAIN ==================== */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef LOCAL
    freopen("input.txt",  "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // ── CF  : multiple test cases (uncomment top line, comment bottom) ────────
    // int T; cin >> T; while (T--) solve();

    // ── AtCoder : single test case (most problems) ───────────────────────────
    solve();

    return 0;
}