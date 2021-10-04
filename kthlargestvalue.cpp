#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, q, d, qtdum;
    qtdum = 0;
    cin >> n >> q;
    vector<int> a;
 
    for (int i = 0; i < n; i++) {
        cin >> d;
        a.push_back(d);
    }
 
    for (int i = 0; i < n; i++) {
        if(a[i] == 1) {
            qtdum++;
        }
    }
 
    for (int i = 0; i < q; i++) {
        int t, b;
        cin >> t >> b;
 
        if(t == 1) {
            a[b - 1] = 1 - a[b - 1];
 
            if(a[b - 1] == 1) {
                qtdum++;
            } else {
                qtdum--;
            }
        }
 
        if(t == 2) {
            int retorno;
            
            if(b > qtdum) {
                retorno = 0;
            } else {
                retorno = 1;
            }
 
            cout << retorno << endl;
        }
    }
}
