#include <bits/stdc++.h>
using namespace std;

int main (){
    long long n, k;
    int ganjil, genap;
    cin >> n >> k;

    long long batas = (n + 1)/2;

    if (k<= batas){
        cout << (2*k) - 1;
    } else {
        long long baru = k - batas; 
        cout << 2 * baru ;
    }
    return 0;
}