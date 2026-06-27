/***
 * Simulations - No Formal Algorithm,
 * Intent of the problem is to assess competence with one's programming language 
 * of choice and knowledgeof built-in datastructures.
 * 
 * Problem says to find the end result of the process, or find when something occurs.
 * It is usually sufficient to simulate the process.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> a(n), b(n), g(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i]>>b[i]>>g[i];
    }
    int ans = 0;
    for (int j = 1; j <=3 ; j++) {
        int pos = j;
        int score = 0;
        for (int i = 0; i < n; i++) {
            //swap
            if(pos == a[i]){
                pos = b[i];
            }
            else if(pos == b[i]){
                pos = a[i];
            }
            if(pos == g[i]){
                score++;
            }
        }
        ans = max(ans,score);
    }
    cout<<ans<<endl;
    
    return 0;
}