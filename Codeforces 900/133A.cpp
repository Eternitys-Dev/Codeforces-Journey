#include <bits/stdc++.h>
using namespace std;

int main (){
// "H" prints "Hello, World!",
// "Q" prints the source code of the program itself,
// "9" prints the lyrics of "99 Bottles of Beer" song,
// "+" increments the value stored in the internal accumulator.

string p;
cin >> p;


for (int i=0; i < p.size(); i++){
    if (p[i] == 'H' || p[i] ==  'Q' || p[i] == '9'){
        cout << "YES" ;
        return 0;
        }
    }

        cout << "NO" ;
        return 0;
}