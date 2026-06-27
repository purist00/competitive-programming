/*
 * ──────────────────────────────────────────────────────────
 *   Template  |  Codeforces + AtCoder  |  1000 → 1900
 * ──────────────────────────────────────────────────────────
 *
 *  FOR ATCODER:  uncomment the two ACL lines below.
 *  FOR CF:       leave them commented.
 *
 *  LEARN THESE BEFORE USING:
 *   Basics (use from day 1)
 *   - ll, vi, vl, pii, pll     → type aliases
 *   - pb, all, sz, fi, se      → container shortcuts
 *   - FOR(i,a,b) / ROF(i,a,b) → loops over [a,b)
 *   - chmin / chmax            → clean DP transitions
 *   - dbg / dbg2 / dbgv        → local-only debug prints
 *
 *   Add when needed (~1300+)
 *   - modpow(a,b,m)            → a^b % m  in O(log b)
 *   - mint (AtCoder only)      → modular int, no manual %
 *   - dsu (AtCoder only)       → Union-Find from ACL
 *
 *   Add when needed (~1600+)
 *   - fenwick_tree (ACL)       → prefix sums with updates
 *   - segtree     (ACL)        → range queries (~1800+)
 * ──────────────────────────────────────────────────────────
 */

#include <bits/stdc++.h>

// ── AtCoder Library ──────────────────────────────────────────────────────────
//  Uncomment both lines below when submitting to AtCoder.
//  ACL gives you: modint, dsu (DSU/Union-Find), fenwick_tree,
//  segtree, lazysegtree, maxflow, scc, twosat, convex_hull_trick and more.
//  Install locally: https://github.com/atcoder/ac-library
//
// #include <atcoder/all>
// using namespace atcoder;

using namespace std;

// ── Type Aliases ─────────────────────────────────────────────────────────────
using ll  = long long;
using ld  = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi  = vector<int>;
using vl  = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;

// ── Modular Int (AtCoder) ─────────────────────────────────────────────────────
//  AtCoder's ACL provides a zero-overhead modint type.
//  Uncomment ONE of these after you've enabled ACL above.
//  Then just use  mint  like a normal number — no manual % ever.
//
//  using mint = modint998244353;    // most AtCoder problems
//  using mint = modint1000000007;   // when problem says 1e9+7

// ── Constants ─────────────────────────────────────────────────────────────────
const ll MOD  = 1e9 + 7;   // for CF; on AtCoder prefer mint above instead
const ll INF  = 4e18;      // safe "infinity" for ll
const int iINF = 2e9;      // safe "infinity" for int

// ── Shorthands ────────────────────────────────────────────────────────────────
#define pb      push_back
#define eb      emplace_back
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x)   ((int)(x).size())
#define fi      first
#define se      second

// ── Loops ─────────────────────────────────────────────────────────────────────
//  FOR(i, 0, n)   →   i = 0, 1, ..., n-1
//  ROF(i, 0, n)   →   i = n-1, n-2, ..., 0
#define FOR(i, a, b)  for (int i = (a); i < (b); i++)
#define ROF(i, a, b)  for (int i = (b) - 1; i >= (a); i--)

// ── Utilities ─────────────────────────────────────────────────────────────────
template<class T> bool chmin(T &a, T b) { return b < a ? (a = b, true) : false; }
template<class T> bool chmax(T &a, T b) { return b > a ? (a = b, true) : false; }

// a^b % mod  in O(log b)  — use mint instead on AtCoder when ACL is active
ll modpow(ll base, ll exp, ll mod) {
    ll res = 1; base %= mod;
    for (; exp > 0; exp >>= 1) {
        if (exp & 1) res = res * base % mod;
        base = base * base % mod;
    }
    return res;
}

// ── Grid Directions ───────────────────────────────────────────────────────────
//  4-dir: up / down / left / right
//  Uncomment 8-dir when you need diagonal moves too
const int dx4[] = { 0,  0,  1, -1};
const int dy4[] = { 1, -1,  0,  0};
// const int dx8[] = { 0,  0,  1, -1,  1,  1, -1, -1};
// const int dy8[] = { 1, -1,  0,  0,  1, -1,  1, -1};

// ── Debug ─────────────────────────────────────────────────────────────────────
//  On CF:      ONLINE_JUDGE is defined → all dbg calls vanish, zero overhead.
//  On AtCoder: ONLINE_JUDGE is defined → same thing.
//  Locally:    prints  [varname] = value  to stderr.
//
//  Usage:  dbg(x);  dbg2(x, y);  dbgv(my_vector);
#ifndef ONLINE_JUDGE
#define dbg(x)      cerr << "[" << #x << "] = " << (x) << "\n"
#define dbg2(x,y)   cerr << "[" << #x << "] = " << (x) \
                         << "  [" << #y << "] = " << (y) << "\n"
#define dbgv(v)     cerr << "[" << #v << "] ="; \
                    for (auto _e : (v)) cerr << " " << _e; cerr << "\n"
#else
#define dbg(x)
#define dbg2(x,y)
#define dbgv(v)
#endif

// ─────────────────────────────────────────────────────────────────────────────
//  YOUR SOLUTION
// ─────────────────────────────────────────────────────────────────────────────

void solve() {
    // code here

}

// ─────────────────────────────────────────────────────────────────────────────

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Local file I/O — only active on your machine, never on the judge.
    // Works for both CF and AtCoder local testing.
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // ── CF style: read T, loop T times ──────────────────────────────────────
    // int t; cin >> t; while (t--) solve();

    // ── AtCoder style: single test case (most AtCoder problems) ─────────────
    solve();

    return 0;
}
