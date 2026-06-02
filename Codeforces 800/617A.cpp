    #include <bits/stdc++.h>
    using namespace std;

    int main(){
    int point = 0;
    int x;
    int step = 0;
    cin >> x;
    while (point < x){
    point += 5;
    step++;
    }
    cout << step;
    return 0;
}