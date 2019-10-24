#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (long long int i = a; i <= b; i++)
        cout << i * i << ' ';
    cout << endl;
    for (long long int j = b; j >= a; j--)
        cout << j * j * j << ' ';
    return 0;
}