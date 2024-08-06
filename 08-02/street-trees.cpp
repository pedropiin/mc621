// Problem N

#include <bits/stdc++.h>

#define INF 1e9

using namespace std;

typedef long long ll;

int main (int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    int min = INF, max = 0, sum = 0;
    for (int i = 1; i < n; i++) {
        cin >> v[i];
        if ((v[i] - v[i - 1]) < min) {
            min = v[i] - v[i-1];
        } else if ((v[i] - v[i-1]) > max) {
            max = v[i] - v[i-1];
        }
        sum += (v[i] - v[i-1] - 2);
    }

    int x = __gcd(min, max);
    cout << sum / x << endl;

    return 0;
}