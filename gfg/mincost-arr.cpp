#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin>>vec[i];
    }
    cout<< (n-1)*(*min_element(vec.begin(),vec.end()));
    return 0;
}