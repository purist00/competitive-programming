/****
 * 
 * 
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char s[500005];
    scanf("%s",s);
    long long n = strlen(s);
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        if(s[i] == 'C'){
            long long left_dist = i;
            long long right_dist = n-1-i;
            long long min_dist;
            if(left_dist <right_dist){
                min_dist = left_dist;
            }
            else{
                min_dist = right_dist;
            }
            ans = ans + min_dist+1;
        }
    }
    cout<<ans<<endl;

    return 0;
}