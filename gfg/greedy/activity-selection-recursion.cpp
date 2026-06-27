/**
 * 
 * RECURSION
 * O(2^N)
 */


#include <bits/stdc++.h>
using namespace std;

int solve(vector<pair<int,int>> &act,  int idx,
    int lastFinish){
        // NO activities left/Empty
    if(idx == act.size()){
        return 0;
    }
    //Option 1: Skip the Curr Activity
    int skip = solve(act,idx+1,lastFinish);
    //Option 2: Take Current Activities
    int take = 0;
    if(act[idx].first >= lastFinish){
        take = 1+solve(act,idx+1,act[idx].second);
    }
    return max(take,skip);

}

int main() {
    ios::sync_with_stdio(false);
   vector<pair<int,int>> act = {
        {1,2},
        {3,4},
        {0,6},
        {5,7},
        {8,9},
        {5,9}
    };
    cout<<solve(act,0,0);

    return 0;
}