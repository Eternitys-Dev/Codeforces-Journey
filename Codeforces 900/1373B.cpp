#include <bits/stdc++.h>
using namespace std;

void test(string binary){
        stack<char> tumpukan;
        for (int i=0; i<binary.length(); i++){
            if (tumpukan.empty()){
                tumpukan.push(binary[i]);
            }

            else if (tumpukan.top() != binary[i]){
                tumpukan.pop();
            }
            
            else {
                tumpukan.push(binary[i]);
            }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        string binary;
        cin >> binary;

        int a = 0;
        int b = 0;
        for (int i=0; i< binary.size(); i++){
            if (binary[i] == '1'){
                a++;
            } else {
                b++;
            }
        }
        int total = min(a,b);
        if (total % 2 == 0){
            cout << "NET" << "\n";
        } else {
            cout << "DA" << "\n";
        }
    }


    return 0;
}