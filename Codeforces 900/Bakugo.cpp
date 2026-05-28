#include <bits/stdc++.h>
using namespace std;

int main (){
    string s;
    cin >> s;

    int a=0;
    int ab=0;
    int granat=0;

    for (int i=0; i < s.size(); i++){
        if (s[i] == 'A'){
            a++;
        } else if (s[i] == 'B'){
            if (a > 0){
                a--;
                ab++;
            }
        }
        else if (s[i] == 'C'){
            if (ab > 0){
            ab--;
            granat++;
            }
        }
    }
    cout << granat << endl;
}