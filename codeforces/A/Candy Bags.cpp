/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long
#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] <<endl; }

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
 
    int l=1;
    int r=n*n;
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j%2==1)
            {
                cout<<l<<" ";
                l++;
            }
            else
            {
                cout<<r<<" ";
                r--;
            }
        }
        cout<<endl;
    }

    return 0;
}
