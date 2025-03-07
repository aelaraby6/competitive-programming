// https://codeforces.com/contest/2042/problem/B


/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        int n;cin>>n;
        vector<int>vec(n);
        map<int,int>mp;
        for(int i = 0;i<n;i++) {
            cin>>vec[i];
            mp[vec[i]]++;
        }
        int one=0,big=0;
        for (auto &[color, freq] : mp) {
            if (freq == 1) one++;
            else big++;
        }
        cout<< big + ((ceil(one/2.0))*2)<<endl;


    }

    return 0;
}
