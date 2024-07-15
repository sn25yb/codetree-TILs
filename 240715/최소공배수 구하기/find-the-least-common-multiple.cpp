#include <iostream>
using namespace std;

int main() {
    int n, m;
    int res;

    cin >> n >> m;
    for (res = min(n, m); res > 0; res--)
        if (!(m % res) && !(n % res))
            break;
    cout << n * m / res;
    return (0);
}