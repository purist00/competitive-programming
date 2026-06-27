/**
 * Sorting - Greedy - O(N Log (N))
 * Sort(iterator, iterator , comparator)
 * 
 * comparator is a lambda function here - 
 * think of it as - 
 * bool compare(pair<int,int> &a, pair<int,int>&b){
 *      return a.second <b.second;
 * }
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<pair<int,int>> act = {
        {1,2},
        {3,4},
        {0,6},
        {5,7},
        {8,9},
        {5,9}
    };
    sort(act.begin(), act.end(), [](auto &a, auto &b){
        return a.second<b.second;
    });

    int count = 1;
    int lastFinish = act[0].second;
    for (int i = 0; i < act.size(); i++) {
        if(act[i].first>=lastFinish){
            count++;
            lastFinish = act[i].second;
        }
    }
    cout<<count;
    return 0;
}