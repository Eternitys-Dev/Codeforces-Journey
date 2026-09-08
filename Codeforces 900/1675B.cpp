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
        int op = 0;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }

        bool bisa = true;
        for (int i=n-2; i>= 0; i--){
            while (a[i] >= a[i+1] && a[i] > 0){
                op++;
                a[i] = a[i] / 2;
            }

            if (a[i] >= a[i+1]){
                bisa = false;
                break;
            }
        }

        if (bisa){
            cout << op << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}