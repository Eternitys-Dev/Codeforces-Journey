    #include <bits/stdc++.h>
    using namespace std;

    int main(){
    int n;
    string s;
    int anton = 0;
    int danik = 0;

    cin >> n;
    cin >> s;
    for (int i=0; i<n; i++){
        if (s[i] == 'A'){
            anton++;
        }
        if (s[i] == 'D'){
            danik++;
        }
    }
    if (anton == danik){
        cout << "Friendship" << endl;
    }   else if (anton > danik) {
        cout << "Anton" << endl;
    } else{
        cout << "Danik" << endl;
    }
    return 0;
}