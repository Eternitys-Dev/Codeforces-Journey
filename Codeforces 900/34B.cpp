#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    
    vector<int> f(n);
    for (int i=0; i < n; i++){
        cin >> f[i];
    }

    sort(f.begin(),f.end());
    int untung = 0;

    for (int i=0; i < m; i++){
        if(f[i] <= 0){
            untung += -f[i];
        } else {
            break;
        }
    }

    cout << untung;
    return 0;
}