
//https://codeforces.com/contest/225/problem/A
/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,a,b;
    cin>>n>>x;
    for(int i=0;i<n;i++) {
        cin>>a>>b;
       if(a == x || a == 7-x || b == x || b == 7-x) {
           cout<<"NO\n";
           return 0;
       }
    }
    cout<<"YES\n";

    return 0;
}
