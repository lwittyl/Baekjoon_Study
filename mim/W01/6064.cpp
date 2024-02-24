#include <iostream>
using namespace std;

int gcd(int a, int b){
    int c;
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b){
    return a*b / gcd(a, b);
}

int main(void){
    int t, m, n, x, y, num, k;
    
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> m >> n >> x >> y;
        num = lcm(m, n);
        if (m == x && n == y){
            cout << num << "\n";
            continue;
        }
        for(k = x; k < num; k+=m){
            if (((k % m == x) || (m == x && k % m == 0)) && ((k % n == y) || (n == y && k % n == 0))){
                cout << k << "\n";
                break;
            }
        }
        if (k >= num){
            cout << "-1\n";
        }
    }
    return (0);
}