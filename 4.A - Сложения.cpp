#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, Q;
    cin >> N >> Q;
    
    vector<long long> diff(N + 2, 0);
    
    for (int i = 0; i < Q; i++) {
        int l, r;
        long long v;
        cin >> l >> r >> v;
        
        diff[l] += v;
        diff[r + 1] -= v;
    }
    
    vector<long long> a(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        a[i] = a[i - 1] + diff[i];
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
