#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, m;
    cin >> n >> m;
    vector<int> f(m);
    int a, b;
    int least = INT_MAX;

    for (int i=0; i<m; i++){
        cin >> f[i];
    }
    
    sort(f.begin(), f.end());
    for (int i = 0; i <= m-n; i++){
        int selisih = f[i + n - 1] - f[i];
        least = min(least, selisih);
    }

    cout << least;

}