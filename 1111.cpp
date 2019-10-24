#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int m, a;
    cout << "m=";
    cin >> m;
    //k = pow(2, a++);
    for (int i = 1; i <= m; i++)
    {
        int n = i;
        //k = pow(2, a++);
        int j = 1, bin = 0;

        while (n > 0)
        {
            bin += n % 2 * j;
            n = n / 2;
            j *= 10;
        }

        cout << i << "  =" << bin << endl;
    }
    return 0;
}