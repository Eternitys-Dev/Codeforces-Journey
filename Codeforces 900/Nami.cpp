#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector <int> harga(n);
    
    for (int i=0; i < harga.size(); i++){
        cin >> harga[i];
    }
    int termurah = harga[0];
    long long bayar = 0;

    for (int i=1; i < harga.size(); i++){
        bayar += termurah;
       if (termurah > harga[i]){
        termurah = harga[i];
       }
    }
    cout << bayar << endl;
    return 0;
}