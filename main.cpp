#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){ 
    ll n, k, x, ans = 0;
    cin >> n >> k;
    ll ara[n], sum[n];
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
        if (i == 0) sum[0] = ara[0];
        else sum[i] = sum[i-1] + ara[i];
    }

    ll mn = (ll) 1e16;
    for (int i = 0; i < n-k+1; i++) {
        if (i == 0) x = sum[i+k-1];
        else x = sum[i+k-1] - sum[i-1];
        if (x < 0) x *= -1;
        if (x < mn) {
            mn = x;
            ans = (ll) i;
        }
    }
    cout << ans+1 << endl;
    return 0;
}
