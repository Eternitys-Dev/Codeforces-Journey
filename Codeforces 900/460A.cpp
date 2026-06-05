#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    int hari = 0;

    while(n > 0){
        hari++;
        n--;
        if (hari % m == 0){
            n++;
        }
    }
    cout << hari;
    return 0;
}