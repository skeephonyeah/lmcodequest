#include <bits/stdc++.h>
using namespace std;

void getTime();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    for(int i=0;i<n;i++){
        getTime();
    }
    return 0;
}

void getTime(){
    double x, y;
    cin >> x >> y;

    x *= 1000000;
    y /= 3600;
    int t, d, h, m, s;
    t = round(x/y);
    s = t%60;
    t /= 60;
    m = t%60;
    t /= 60;
    h = t%24;
    t /= 24;
    d = t;
    cout << "Time to Mars: " << d << "days, " << h << "hours, " << m << "minutes, " << s << " seconds" << "\n";
}