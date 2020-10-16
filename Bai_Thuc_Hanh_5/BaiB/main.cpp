#include <bits/stdc++.h>

using namespace std;

long long gcd(long long m, long long n)
{
  if (n == 0)
    return m;
  return gcd(n, m % n);
}
int main()
{
    long long m, n;
    cin >> m >> n;
    long long k = gcd(m, n);
    if(n == m) {
        cout << n;
        return 0;
    }
    if(m == 1 and n%2==0 || n == 1 and m%2==0) cout << "0";
    else if(m % n == 0 || n % m == 0) cout << "0";
    else if(n % 2 == 0 and m % 2 != 0 || m % 2 == 0 and n % 2 != 0){
        cout << "0";
    }
    else cout << k;

}
