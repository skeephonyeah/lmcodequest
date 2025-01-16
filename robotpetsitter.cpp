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
        string s;
        string response = "TRUE";
        cin >> s;
        int x = 0;
        int y = 0;
        for(int i = 0;i <s.length();i++){
                if(s.at(i) = 'L'){
                        x -= 1;
                }
                else if(s.at(i) = 'R'){
                        x += 1;
                }
                else if(s.at(i) = 'D'){
                        y -= 1;
                }
                else if(s.at(i) = 'U'){
                        y += 1;
                }
                
        }
}
