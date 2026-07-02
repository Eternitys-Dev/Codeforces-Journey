#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--){
        int b; //timer
        int n; //tools
        int a; //max
        cin >> a >> b >> n;

        long long ans = b;
        for (int i=0; i<n; i++){
            int x;
            cin >> x;

            ans += min(x, a-1);
        }
        cout << ans << "\n";
    }

    return 0;
}