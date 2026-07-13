#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<long long> t(N);
    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }
    
    long long ans = t[0];
    for (int i = 1; i < N; i++) {
        ans = lcm(ans, t[i]);
    }
    
    cout << ans << endl;
    
    return 0;
}
