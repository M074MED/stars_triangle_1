#include <iostream> 
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the number: ";
Mark1:
    cin >> x;
    if (x >= 0)
    {
        if (x % 2 == 0)
        {
            cout << "\aWarning!! the number " << x << " is even.\
            \nthe number that will be token is " << x-1 << 
            "\ndo you agree?\n1-Yes\n2-No\nChoose the number: ";
            Mark3:
            cin >> y;
            if (y == 1)
            {
                goto Mark2;
            }
            else if (y == 2)
            {
                cout << "Enter an odd number: ";
                goto Mark1;
            }
            else
            {
                cout << "\aError!! Wrong input, please choose a correct number: ";
                goto Mark3;
            }
        }
        else
        {
            Mark2:
            for (int i = 1; i <= x; i+=2)
            {

                for (int j = (x-i)/2; j >= 0; j--)
                {
                    cout << " ";
                }

                for (int k = 1; k <= i; k++)
                {
                    cout << "*";
                }
                
                cout << endl;
            }
        }
    }
    else
    {
        cout << "\aError!! Wrong input, please enter a positive number: ";
        goto Mark1;
    }
    return 0;
}