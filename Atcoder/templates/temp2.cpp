#include <bits/stdc++.h>
#ifdef LOCAL
#include <debug.hpp>
#else
#define debug(...) void(0)
#endif

template <class T, class U = T> bool chmin(T& x, U&& y) { return y < x and (x = std::forward<U>(y), true); }

template <class T, class U = T> bool chmax(T& x, U&& y) { return x < y and (x = std::forward<U>(y), true); }

template <class T> void mkuni(std::vector<T>& v) {
    std::ranges::sort(v);
    auto result = std::ranges::unique(v);
    v.erase(result.begin(), result.end());
}

template <class T> int lwb(const std::vector<T>& v, const T& x) {
    return std::distance(v.begin(), std::ranges::lower_bound(v, x));
}

using namespace std;

using ll = long long;

constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void solve() {
    int H, W;
    cin >> H >> W;
    auto isin = [&](int x, int y) { return 0 <= x and x < H and 0 <= y and y < W; };
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int ans = 0;
            for (int k = 0; k < 4; k++) {
                int nx = i + dx[k], ny = j + dy[k];
                ans += isin(nx, ny);
            }
            cout << ans << " \n"[j + 1 == W];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(15);

    solve();
    return 0;
}
