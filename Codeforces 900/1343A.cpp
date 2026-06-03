#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        int x,k;
        long long pembagi = 3;
        while (n % pembagi != 0){
            pembagi = (pembagi*2) + 1;
        }
        x = n/pembagi;
        cout << x << "\n";
    }

    return 0;
}