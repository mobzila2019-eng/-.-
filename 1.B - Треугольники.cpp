#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[1000];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    int l, r;
    while (true) {
        cin >> l >> r;
        if (l == 0 && r == 0) {
            break;
        }
        
        int left = l;
        int right = r;
        while (left < right) {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left = left + 1;
            right = right - 1;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
