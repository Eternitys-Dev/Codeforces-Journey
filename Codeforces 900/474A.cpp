#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char arah;
    cin >> arah;

    string kalimat;
    cin >> kalimat;

    for (int i=0; i< kalimat.length(); i++){
        for (int j=0; j<keyboard.length(); j++){
            if (kalimat[i] == keyboard[j]){
                if (arah == 'R'){
                kalimat[i]= keyboard[j-1];
            } else {
                kalimat[i] = keyboard[j+1];
            }
            break;
        }
        }
    }

    cout << kalimat;
    return 0;
}