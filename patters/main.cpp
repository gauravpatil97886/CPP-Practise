#include <iostream>

using namespace std;

int main()
{
    {
    cout << endl;
    int height, i, j, k, l;
    cout << endl;
    cout << "Enter height of the pattern: ";
    cout << endl;
    cin >> height;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= (height - i + 1); j++)
        {
            cout << j << " ";
        }
        for (k = 1; k <= (i - 1); k++)
        {
            cout << "* ";
        }
        for (k = (i - 1); k >= 1; k--)
        {
            cout << "* ";
        }
        for (l = (height - i + 1); l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }

}
}
