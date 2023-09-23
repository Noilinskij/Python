#include <iostream>
#include <cmath>
#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    long long n, l, r, c = 0, m = 0;
    cin >> n;
    vector <long long> a(n);
    for (long long i = 0; i < n; i++){
        cin >> a[i];
    }
    while(cin >> l){
        cin >> r;
        if (r == 0 && l == 0){
            break;
        }
        l -= 1;
        r -= 1;
        m = r;
        for (long long i = l; i <= m; i += 2){
            c = a[l];
            a[l] = a[r];
            a[r] = c;
            r -= 1;
            l += 1;
        }
    }
    for (long long i = 0; i < n; i++){
        cout << a[i] << " ";
    }


    }
// 5 4 3 2 1
//
