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
        int x;
        string temp;
        cin >> x >> temp;

        int set = 0;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        string sentence = "";
        for(int i=0;i<temp.length();i++){
                string letter = "";
                set = temp.find(temp.at(i));
                if(temp.at(i) = ' '){
                        letter = " ";
                }
                else if((set - x)<0){
                        set = 26;
                        set -= x;
                        letter = alphabet[set];
                }
                else{
                        set -= x;
                        letter = alphabet[set];
                }
                sentence = sentence + letter;
                cout << sentence + "\n";
        }
}
