#include <iostream>
using namespace std;
main()
{
    float amount = 0;
    char mon1, mon2 = 'Y';

    while (mon2 == 'Y')
    {
        cout << "Select if you want to exchange\n";
        cout << " - Enter B for Belarus Rubels\n";
        cout << " - Enter D for Dollar\n"
             << endl;
        cout << "Please select the currency that you want to convert" << endl;
        cin >> mon1;
        cout << "Please enter the currency that you want to convert into" << endl;
        cin >> mon2;
        cout << "Enter Amount: ";
        cin >> amount;
        if (mon1 == 'B' && mon2 == 'D')
        {
            //BYN by 2.38 to convert into dollar
            cout << amount << " BYN = " << amount / 2.38 << " Dollars" << endl;
        }

        if (mon1 == 'D' && mon2 == 'B')
        {
            //DOLLARS by 2.38 to convert into BYN
            cout << amount << " Doll = " << amount * 2.38 << " BYN" << endl;
        }

        cout << "Do you want to make another conversion? ( Y/N ) :";
        cin >> mon2;
    }
    cout << "Goodbye :) " << endl;
}