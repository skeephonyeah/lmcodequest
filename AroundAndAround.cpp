#include <bits/stdc++.h>
using namespace std;

void getOutput();

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        cin >> n;
        cin.ignore();

        for (int i = 0; i < n; i++) {
                getOutput();
        }

        return 0;
}

void getOutput() {
       double x;
       cin >> x;
       cout << fixed << setprecision(1) << (2)*(M_PI)*(x)+40075 << "\n"; 
}
