#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        if (n % 2 != 0){
            cout << "YES\n";
            continue;
        }

        while (n % 2 == 0){
            n = n/2;
        }
        if (n == 1){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}