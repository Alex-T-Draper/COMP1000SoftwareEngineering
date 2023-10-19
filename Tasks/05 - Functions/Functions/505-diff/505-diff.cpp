#include <iostream>
using namespace std;

//Function prototypes
int sub(int u, int v);
int absDiff(int var1, int var2);

int main()
{
    int var1, var2;

    //Prompt the user
    cout << endl << "Enter value 1: ";
    cin >> var1;
    cout << endl << "Enter value 2: ";
    cin >> var2;

    // Calculate the difference
    absDiff(var1, var2);
    int diff = absDiff(var1, var2);

    // print out the results
    cout << "Absolute diff = " << diff << endl;
}

// Simple function to subtract
// return result is u-v
int sub(int u, int v)
{
    int y = u - v;
    return y;
}

int absDiff(int var1, int var2)
{
    int diff = 0;

    if (var1 >= var2)
    {
        diff = sub(var1, var2);
    }
    else
    {
        diff = sub(var2, var1);
    }

    return diff;
}
