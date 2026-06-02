#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int batas = min(n,m);

    if (batas % 2 != 0){
        cout << "Akshat";
    } else {
        cout << "Malvika";
    }
    return 0;
}