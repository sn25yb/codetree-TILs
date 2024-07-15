#include <iostream>
using namespace std;

int main() {
    int n;
    int res;

    cin >> n;
    res = 0;
    for (int i = 0; i < n; i++)
    {    
        for (int j = 0; j < n; j++)
        {  
            cout << res++ % 9 + 1;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}