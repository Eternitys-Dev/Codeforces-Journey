#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int p[n+1];
    for(int i=1; i<=n; i++){
        cin >> p[i];
    }

    int maks = 0;
    for(int i=1; i<=n; i++){
        int sekarang = i;
        int tingkat = 1;

        while(p[sekarang] != -1){
            sekarang = p[sekarang];
            tingkat++;
        }
        maks = max(maks,tingkat);
    }
    cout << maks;
    return 0;
}