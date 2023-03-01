#include <iostream>
using namespace std;

float cost(float price)
{
    float result = price;
    for (int i = 2; i < 31; i++)
    {
        // cout << i % 2 << endl;
        if (i == 15)
        {
            continue;
        }
        else if (i % 2 == 0)
        {
            result += price * 1.2;
            price = result;
            // cout << result << endl;
        }

        else
        {
            result += price * 0.8;
            price = result;
            // cout << result << endl;
        }
    }
    return result;
}

void directions()
{
    int arr[] = {1, 2, 1, 3, 1, 2, 2, 1, 3, 2, 4, 1, 2, 3, 1, 4, 1, 2, 1, 3, 1, 2, 1, 1, 4};
    int x = 0, y = 0, i = 0;
    // cout << sizeof(arr) / sizeof(int);
    // cout << x << "and" << y << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] == 1)
        {
            y += 1;
        }
        else if (arr[i] == 2)
        {
            x -= 1;
        }
        else if (arr[i] == 3)
        {
            y -= 1;
        }
        else if (arr[i] == 4)
        {
            x += 1;
        }
        else if (i != 0 and x == 0 and y == 0)
        {
            x = 1;
            y = 1;
        }
    }
    // while (i <= sizeof(arr) / sizeof(int))
    // {
    //     // cout << i << " " << arr[i] << endl;
    //     switch (arr[i])
    //     {
    //     case 1:
    //         y += 1;
    //         cout << x << " " << y << endl;
    //         break;
    //     case 2:
    //         x -= 1;
    //         cout << x << " " << y << endl;
    //         break;
    //     case 3:
    //         y -= 1;
    //         cout << x << " " << y << endl;
    //         break;
    //     case 4:
    //         x += 1;
    //         cout << x << " " << y << endl;
    //         break;

    //     default:
    //         break;
    //     }
    //     switch (i)
    //     {
    //     case 0:
    //         break;

    //     default:
    //         switch (x)
    //         {
    //         case 0:
    //             switch (y)
    //             {
    //             case 0:
    //                 x = 1;
    //                 y = 1;
    //                 cout << "eiei" << x << " " << y << endl;
    //                 break;

    //             default:
    //                 break;
    //             }
    //         }
    //         break;
    //     }
    //     i++;
    // }
    cout << "position is ";
    cout << "x = " << x << " and "
         << "y = " << y << endl;
}

int main()
{
    int test[] = {1, 2, 3, 4, 5, 6};
    cout << "start" << endl;
    cout << "question 1" << endl;
    cout << cost(1) << endl;
    cout << "question 2" << endl;
    directions();
    return 0;
}