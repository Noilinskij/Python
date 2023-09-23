#include <iostream>
#include <cmath>
#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, m;
    cin >> n >> m;
    vector <vector<long long>> a(n, vector<long long>(m));
    for (long long i = 0; i < n; i++){
        for (long long j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    vector <vector<long long>> b(m, vector<long long>(n));
    cout << m << " " << n << "\n";
    for (long long i = 0; i < m; i++){
        for (long long j = 0; j < n; j++){
            b[i][j] = a[j][i];
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }


    }





