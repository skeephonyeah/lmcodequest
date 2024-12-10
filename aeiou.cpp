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
        int x = 0;
        int t = 0;
        string str;
        getline(cin, str);
        for(int i=0;i<str.length();i++){
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                        x++;
                }
        }
        cout << x << "\n";
}
