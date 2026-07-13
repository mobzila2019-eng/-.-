#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        pq.push(x);
    }
    
    for (int i = 0; i < N - 1; i++) {
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        
        cout << a << " " << b << "\n";
        
        long long sum = a + b;
        pq.push(sum);
    }
    
    return 0;
}
