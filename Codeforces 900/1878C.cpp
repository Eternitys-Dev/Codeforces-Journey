#include <bits/stdc++.h>
using namespace std;

//  n
//  k
//  and x
// ) — the maximum element he can choose, the number of elements he can choose and the sum he has to reach
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        long long n,k,x; 
        cin >> n >> k >> x;

        long long min = k * (k + 1) / 2;
        long long max = k * (2 * n - k + 1) / 2;

        if (x >= min && x <= max){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}