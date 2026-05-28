    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
            
        int t;
        cin >> t;
        while (t--){
            int times = 0;
            long long n;
            cin >> n;

            while (n > 1) {
                if (n % 6 == 0){
                    n = n / 6;
                    times++;
                } else if (n % 3 == 0){
                    n = n * 2;
                    times++;
                } else {
                    times = -1;
                    break;
                }
            }
            cout << times << "\n";
        }
        return 0;
    }