#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k ;
    int nilai[n];
    int total_lulus = 0;

    for(int i=0; i<n; i++){
        cin >> nilai[i];
    }
    int patokan = nilai[k-1];

    for (int j = 0; j < n; j++) {
        if (nilai[j] >= patokan && nilai[j] > 0){
            total_lulus ++;
            }
        }  
    cout << total_lulus << endl;
}