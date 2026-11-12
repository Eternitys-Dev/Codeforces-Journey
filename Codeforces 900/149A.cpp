#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    vector <int> a(12);
    for (int i=0 ; i<12; i++ ){
        cin >> a[i];
    }

    if (k == 0) {
        cout << "0";
        return 0;
    }
    int total = 0;
    int bulan = 0;
    sort (a.rbegin(), a.rend());
    for (int i= 0; i < a.size(); i++){
        total += a[i];
        bulan++;
        if (total >= k){
            break;
        }
    }

    if (total >= k){
        cout << bulan;
    } else {
        cout << "-1";
    }
    return 0;
}