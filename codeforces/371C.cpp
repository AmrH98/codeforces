#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string recipe;
    cin >> recipe;

    int nb, ns, nc;
    cin >> nb >> ns >> nc;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;

    long long money;
    cin >> money;

    int count_b = 0, count_s = 0, count_c = 0;
    for (char c : recipe) {
        if (c == 'B') count_b++;
        else if (c == 'S') count_s++;
        else count_c++;
    }

    long long left = 0, right = 1e13, hamborgarrr = 0;
    while (left <= right) {
        long long mid = left + (right - left) / 2;

        long long required_b = max(mid * count_b - nb, (long long)0);
        long long required_s = max(mid * count_s - ns, (long long)0);
        long long required_c = max(mid * count_c - nc, (long long)0);

        long long cost = required_b * pb + required_s * ps + required_c * pc;

        if (cost <= money) {
            hamborgarrr = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << hamborgarrr << endl;
    return 0;
}
