/**
 * https://www.geeksforgeeks.org/dsa/minimum-rotations-unlock-circular-lock/
 */
/**
 * leading zero Edge case 
 */

#include <bits/stdc++.h>
using namespace std;

int minRotation(string curr, string target){
    int rotations= 0;
    for (int i = 0; i < curr.size(); i++) {
        int a = curr[i]-'0'; //convert digit character to an INT.
        int b = target[i]-'0';
        int diff = abs(a-b);
        rotations += min(diff,10-diff);
    }
    return rotations;
}



int main()
{
    string curr,target;
    cin>>curr>>target;
    cout<<minRotation(curr,target)<<'\n';
    
    return 0;
}