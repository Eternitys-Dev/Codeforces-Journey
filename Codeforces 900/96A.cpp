#include <bits/stdc++.h>
using namespace std;
int main (){
    string players;
    int save = 1;

    cin >> players ;
    for (int i =0; i < players.size() - 1; i++){
        if (players[i] == players[i+1]){
                save++;
                if (save == 7){
                    cout << "YES" << endl;
                    return 0;
                } 
            } else {
                    save = 1;
            }
    }
    cout << "NO" << endl;
    return 0;
}