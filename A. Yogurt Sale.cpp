#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        // 3  5  9
        // 2  5  9
        int n, a, b; cin>>n>>a>>b;
        if (n % 2 == 1){
            int p = ((n-1) / 2) * b; // 3 - 1 / 2 * 9 = 9
            int f = a + p;
            if (f > n * a){
                cout << n * a <<endl;
            }else {
                cout << f <<endl;
            }
        }else { // 2  5  9
            int p1 = n * a; // 2 * 5 = 10
            int p2 = (n / 2) * b; // 2 / 2 * 9 = 9
            if (p1 > p2){
                cout << p2 <<endl;
            }else {
                cout << p1 <<endl;
            }
        }
    }
    return 0;
}