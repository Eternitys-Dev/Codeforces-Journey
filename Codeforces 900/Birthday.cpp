#include <bits/stdc++.h>
using namespace std;

struct Data{
    string nama;
    int c;
    string date;
};

bool aturan(Data A,Data B){
    if (A.date != B.date){
        return A.date < B.date;
    } else {
        return A.c > B.c;
    }
}

int main (){
    int n;
    cin >> n;
    vector <Data> data(n);
    int k = (n+1) /2;
    vector <string> pemenang;
    
    for(int i=0; i<n; i++){
        cin >> data[i].nama >> data[i].c >> data[i].date;
    }

    sort(data.begin(), data.end(), aturan);
    string tanggal = "";
    for(int i=0; i<n; i++){
        if(data[i].date != tanggal){
            pemenang.push_back(data[i].nama);
            tanggal = data[i].date;
        } 
    }
    sort(pemenang.begin(), pemenang.end());
    cout << pemenang.size() << endl;
    for(string nama: pemenang){
        cout << nama << endl;
    }

}