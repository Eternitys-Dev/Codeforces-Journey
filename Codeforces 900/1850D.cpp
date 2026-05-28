#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i=0;i < n; i++){
        cin >> a[i];
    }

    int urutan = 1;
    int streak = 1;

    sort(a.begin(), a.end());  

    for (int i=0; i<n-1 ;i++){
        if (a[i+1] - a[i] <= k){
            urutan++;
        } else{
            urutan = 1;
        }
        streak = max(streak, urutan);
    }
    cout << n - streak << "\n";
}
    return 0;
}