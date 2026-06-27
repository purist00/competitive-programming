/**
 * Acitivity Selection - Greedy
 * 1. Naive 
 * 2. Sorting 
 * 3. [Greedy] - Large Input 
 */

 /**
  * Most Naive - O(N^2) -  TLE/MLE -
  * 
  * Try every activity as the first selected activity, then repeatdly
  * pick the next compatible activity.
  */

  #include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    vector<pair<int,int>> act = {
        {1,2}, {3,4}, {0,6}, {5,7}, {8,9}, {5,9}
    };
    int n = act.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int count=1;
        int lastFinish = act[i].second;
        for (int j = 0; j < n; j++) {
            if(j==i){
                continue;
            }
            if(act[j].first>=lastFinish){
                count++;
                lastFinish = act[j].second;
            }
        }
        ans = max(ans,count);
    }
    cout<<ans<<'\n';

      return 0;
  }