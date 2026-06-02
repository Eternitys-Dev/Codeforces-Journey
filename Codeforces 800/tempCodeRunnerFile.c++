#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;

    cin >> name;
    int jumlahunik = 0;
    sort(name.begin(), name.end());

    for (int i=0; i<name.length(); i++){
        if (name[i] != name[i+1]){
            jumlahunik++;
        }
    }
    if (jumlahunik % 2 == 0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}