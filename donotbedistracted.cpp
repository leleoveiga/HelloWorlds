#include <bits/stdc++.h>
 
using namespace std;
 
string sus(int dias, string task) {
    string retorno = "YES";
    int counter = 0;
    vector<char> letras(dias);
 
    for (int j = 0; j < dias; j++) {
        if(j == 0) {
            letras[counter] = task[j];
            counter++;
        } else {
            if(task[j] != task[j - 1]) {
                if(find(letras.begin(), letras.end(), task[j]) != letras.end()) {
                    retorno = "NO";
                    break;
                } else {
                    letras[counter] = task[j];
                    counter++;
                }
            }
        }
    }
 
    return retorno;
}
 
int main() {
    int c, d;
    string t;
    cin >> c;
 
    for (int i = 0; i < c; i++) {
        cin >> d >> t;
        cout << sus(d, t) << endl;
    }
}