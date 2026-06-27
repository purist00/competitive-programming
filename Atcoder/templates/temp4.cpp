#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
#define Inf (1ll<<60)
#define For(i,s,t) for(int i=s;i<=t;++i)
#define Down(i,s,t) for(int i=s;i>=t;--i)
#define ls (i<<1)
#define rs (i<<1|1)
#define lowbit(x) ((x)&(-(x)))
#define End {printf("NO\n");exit(0);}
#define ep emplace_back
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
inline void ckmx(int &x,int y){x=(x>y)?x:y;}
inline void ckmn(int &x,int y){x=(x<y)?x:y;}
inline void ckmx(ll &x,ll y){x=(x>y)?x:y;}
inline void ckmn(ll &x,ll y){x=(x<y)?x:y;}
inline int min(int x,int y){return x<y?x:y;}
inline int max(int x,int y){return x>y?x:y;}
inline ll min(ll x,ll y){return x<y?x:y;}
inline ll max(ll x,ll y){return x>y?x:y;}
#define gc() getchar()
#define read() ({\
    int x = 0, f = 1;\
    char c = gc();\
    while(c < '0' || c > '9') f = (c == '-') ? -1 : 1, c = gc();\
    while(c >= '0' && c <= '9') x = x * 10 + (c & 15), c = gc();\
    f * x;\
})
void write(int x){
    if(x>=10) write(x/10);
    putchar(x%10+'0');
}
const int N=2e6+100,p=998244353;
inline int bmod(int x){return x>=p ? x-p : x;}
inline void add(int &x,int y){x=bmod(x+y);}
inline int qpow(int x,int y){
    int res=1;
    for(;y;y>>=1,x=1ull*x*x%p)
        if(y&1)
            res=1ull*x*res%p;
    return res;
}
int x,y,z,fac[N],inv_fac[N];
void init(){
    int n=2e6+5;
    fac[0]=fac[1]=inv_fac[0]=inv_fac[1]=1;
    For(i,2,n) fac[i]=1ull*fac[i-1]*i%p;
    inv_fac[n]=qpow(fac[n],p-2);
    Down(i,n,3) inv_fac[i-1]=1ull*inv_fac[i]*i%p;
}
inline int C(int x,int y){return x<0 || y<0 || x<y ? 0 : 1ull*fac[x]*inv_fac[y]%p*inv_fac[x-y]%p;}
void solve(){
    init();
    x=read(),y=read(),z=read();
    int ans=0,lim=min(y,x);
    For(i,1,lim) add(ans,1ull*C(y+1,i)*C(x-1,i-1)%p*C(z+y-i,y-i)%p);
    printf("%d\n",ans);
}
int main()
{
// #if !ONLINE_JUDGE
//     freopen("test.in","r",stdin);
//     freopen("test.out","w",stdout);
// #endif 
    int T=1;
    // T=read();
    while(T--) solve();
    return 0;
}