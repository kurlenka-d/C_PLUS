#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int m, a = 1;
    cout << "m=";
    cin >> m;
    //k = pow(2, a++);s

    for (int i = 1; i <= m; i += 2)
    {
        if (i = pow(2, a++))
        {
            cout << i - 1;
        }

        int n = i - 1; // + k;
        int j = 1, bin = 0;
        while (n > 0)
        {
            bin += n % 2 * j;
            n = n / 2;
            j *= 10;
        }
        cout << " -- " << bin << endl;
    }
    // cout << i << "  =" << k << endl;

    return 0;
}