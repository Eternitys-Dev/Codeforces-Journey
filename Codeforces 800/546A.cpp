    #include <bits/stdc++.h>
    using namespace std;

    int main(){
    int k;//uang pertama
    int w; //pisang
    int n; //total uang
    int harga = 0;
    int pinjam = 0;

    cin >> k >> n >> w;

    for (int i =1; i <= w; i++){
        harga += i * k;
    }
    pinjam = harga - n;
    if (pinjam <= 0){
        cout << "0" << endl;
    } else {
        cout << pinjam << endl;
    }

}

