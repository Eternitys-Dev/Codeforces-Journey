#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int tertinggi = 0;

    string pemenang = "";

    for (int i=0; i <s.length() - 1; i++){
        string kandidat = s.substr(i,2);
        int rekor = 0;
        for (int j=0; j<s.length() -1; j++){
            if (kandidat == s.substr(j,2)){
                rekor++;
            }
        }
        if (rekor > tertinggi) {
            tertinggi = rekor;
            pemenang = kandidat;
        }
    }

    cout << pemenang;
    return 0;
}