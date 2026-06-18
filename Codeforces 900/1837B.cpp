#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

       int cost = 1;
        int streak = 1;
        for (int i=0; i<n - 1; i++){
            if (s[i] == s[i+1]){
                streak ++;
            } else{
                streak = 1;
            }
            cost = max(streak, cost);
        }
        cout << cost + 1 << "\n";
    }
    return 0;
}