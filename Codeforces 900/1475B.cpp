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

        int hasil = n / 2020;
        int sisa = n % 2020;
        if (hasil >= sisa){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}