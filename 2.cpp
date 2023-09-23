#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main(){
   long long n = 0, m = 0, ans = 0;
   string dn = "",ns = "", ms = "";
   cin >> n >> m >> ns >> ms;
   for (auto v : ns)
   {
        dn += v;
        if (size(dn) == m ){
            if (dn == ms){
                ans += 1;
            }
            dn.erase(0,1);
        }
   }
   cout << ans;




}
