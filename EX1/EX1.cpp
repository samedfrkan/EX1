#include <iostream>
using namespace std;

int main()
{
    int ArrayA[10];
    int ArrayB[5];
    int i = 0;
    int j = 0;
    int k = 0;

    for (i = 0; i < 10; i++)
    {
        cout << "Enter an integer number for ArrayA: " << endl;
        cin >> ArrayA[i];
    }

    ArrayB[0] = ArrayA[0] * ArrayA[9];
    ArrayB[1] = ArrayA[1] * ArrayA[8];
    ArrayB[2] = ArrayA[2] * ArrayA[7];
    ArrayB[3] = ArrayA[3] * ArrayA[6];
    ArrayB[4] = ArrayA[4] * ArrayA[5];

    cout << "Elements of ArrayB: " << endl;

    while (j<5)
    {
        cout << ArrayB[j] << "    ";
        j++;
    }
    j = 0;
    cout << endl<< "New elements of ArrayB: " << endl;

    
    while (j<5)
    {
        for (k = j + 1; k < 5; k++)
        {
            if (ArrayB[j] == ArrayB[k])
            {
                ArrayB[k] = -1;
                for (j = 0; j < 5; j++)
                {
                    cout << ArrayB[j] << ',';
                }

            }
        }
        j++;
    }

    system("pause");
}

