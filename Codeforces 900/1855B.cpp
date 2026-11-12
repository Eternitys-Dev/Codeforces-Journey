#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        long long n;
        cin >> n;

        int streak = 0;
        for (long long i=1; ; i++){
            if (n % i == 0){
                streak++;
            } else {
                break;
            }
        }
        cout << streak << "\n"; 
    }

    return 0;
}