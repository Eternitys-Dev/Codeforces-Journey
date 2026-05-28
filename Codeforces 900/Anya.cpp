#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;//jumlah;
    int x;//posisi
    cin >> n >> x;
    vector<int> a(n);

    for (int i=0; i<n; i++){
    cin >> a[i];
    }

    vector<int> sisa;
    for (int i=0; i < n; i++){
        if (i != x - 1){
            sisa.push_back(a[i]);
        }
    }

    for (int i=0; i< (int)sisa.size() - 1; i++){
        if (sisa[i] > sisa[i+1]){
            cout << 0 << endl;
            return 0;
        }
    }

    cout << 1 << endl;
    return 0;
}