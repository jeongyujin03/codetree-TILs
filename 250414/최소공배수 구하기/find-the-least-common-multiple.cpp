#include <iostream>
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m;
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    FASTIO;
    int n, m;
    cin >> n >> m;

    int g = gcd(n,m);
    cout << n/g * m;

    return 0;
}