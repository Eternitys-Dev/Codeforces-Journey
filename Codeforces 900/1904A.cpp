#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long a, b; //move knight
        long long xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >>yq;
        
        long long dx[] = {a, a, -a, -a, b, b, -b, -b};
        long long dy[] = {b, -b, b, -b, a, -a, a, -a};

        set<pair<long long, long long>> king_attacks;
        set<pair<long long, long long>> queen_attacks;

        for(int i=0; i<8; i++){
            king_attacks.insert({xk + dx[i], yk + dy[i]});
            queen_attacks.insert({xq + dx[i], yq + dy[i]});
        }

        int ans = 0;
        for (auto count: king_attacks){
            if(queen_attacks.count(count)){
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}