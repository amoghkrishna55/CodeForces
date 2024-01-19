#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        long long int f, a, b;
        cin >> n >> f >> a >> b;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int anchor = 0;
        for (int i = 0; i < n; i++)
        {
            if (a * (arr[i] - anchor) > b)
            {
                f = f - b;
            }
            else
            {
                f = f - a * (arr[i] - anchor);
            }
            if (f <= 0)
            {
                break;
            }
            anchor = arr[i];
        }
        if (f <= 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }

        delete[] arr;
    }

    return 0;
}
