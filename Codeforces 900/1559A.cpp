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

        int hasil = 0;
        for (int i=0; i < n; i++){
            int x;
            cin >> x;

            if (i == 0){
                hasil = x;
            } else {
                hasil = hasil & x;
            }

        }
        cout << hasil << "\n";
    }

    return 0;
}