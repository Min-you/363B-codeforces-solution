#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> height;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        height.push_back(temp);
    }
    sort(height.begin(), height.end());
    int sum = 0;
    for (int i = 0; i < k; i++){
        sum += height[i];
    }
    cout << sum << endl;
}
