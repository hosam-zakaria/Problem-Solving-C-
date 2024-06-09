#include <bits/stdc++.h>
using namespace std;
/* ---  Hosam Zakaria  ---  */
int main (){
    int t; cin>>t;
    while(t--){
        /* ---  Hosam Zakaria  ---  */
        long long a , b, c;
        cin>>a>>b>>c;
        // 1  4  1 
        if (b % 3 != 0 && c <(3 - b%3)){ // 3 - 1 = 2 > 1 --> -1
            cout << "-1" << endl; 
        }else if ((b+c) % 3  == 0){
            cout << a+(b+c)/3 << endl;
        }else if ((b+c) % 3  != 0){
            cout << a+(b+c)/3 + 1<< endl;
        }

    }
}
/* ---  Hosam Zakaria  ---  */