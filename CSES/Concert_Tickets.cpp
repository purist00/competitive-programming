/**
 * Multiset is sorted in increasing order
 * 
 * upper_bound(x) => element>x
 * lower_bound(x) => element>=x
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
   int tickets[200000];
   bool sold[200000] = {false};
   for (int i = 0; i < n; i++) {
    cin>>tickets[i];
   }
   for (int i = 0; i < m; i++) {
    int budget;cin>>budget;
    int bestPrice = -1;
    int bestidx = -1;
    for (int j = 0; j < n; j++) {
        if(!sold[j] && tickets[j]<=budget){
            if(tickets[j]>bestPrice){
                bestPrice = tickets[j];
                    bestidx =  j;
            }
        }
    }
    cout<<bestPrice<<'\n';
      if (bestidx != -1) {
            sold[bestidx] = true;
   }
}
    return 0;
} 