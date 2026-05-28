#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n, q;
        cin >> n >> q;
        vector <int> a(n+1);
        vector <long long> pref(n+1, 0);
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            pref[i] = pref[i-1] + a[i];
        }

        long long total_asli = pref[n];
        while (q--){
            long long l,r,k;
            cin >> l >> r >> k;

            long long rentang_dibuang = pref[r] - pref[l-1];
            int panjang = (r-l+1);
            long long total_dimasukkan = panjang * k;
            
            long long total_baru = total_asli - rentang_dibuang + total_dimasukkan;
            
            if (total_baru % 2!= 0){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}