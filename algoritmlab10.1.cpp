#include <iostream>
#define n 10
double arr[n]{};
double a = 1;

using namespace std;

int fact(int N)
{
    for (int i = 1; i <= n; i++) {
        if (i == 1)
        {
            arr[i] = 1;
        }
        else {
            double b = i * (i - 1);
            for (int j = 1; j < i; j++) {
                if (j != i - 1) {
                    b = b * j;
                }
            }
            arr[i] = a / b;
        }
        cout << arr[i]<<"\n";
    }
    return 0;
}



int main()
{
    fact(n);
    return 0;
}
