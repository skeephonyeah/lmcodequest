#include <bits/stdc++.h>
using namespace std;

void getTime();

int main(){
    ios_base::sync_with_stdio(false); //not syncing with stdio
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
    int t, days, hours, minutes, seconds;
    t = round(x/y);
    seconds = t%60;
    t /= 60;
    minutes = t%60;
    t /= 60;
    hours = t%24;
    t /= 24;
    days = t;
    cout << "Time to Mars: " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << "\n";
}