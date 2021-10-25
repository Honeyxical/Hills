#include <iostream>
#define rSize 12

using namespace std;
double A = 0;
double B = 0;
double C = 0;
void coefficients(double x1, double y1, double x2, double y2);
bool checkingNextPoint(double x, double y);

int main() {
    int mass[rSize] = {1,2,2,6,7,8,9,13,13,18,19,20};
    int step = 4;

    coefficients(0, mass[0], 2, mass[1]);
    for(int i = 2; i <= rSize; i++){
        if (!checkingNextPoint(step, mass[i]))
        {
            cout << "Didnt see:  " << mass[i] << endl;
        }
        else
        {
            coefficients(0, mass[0], step, mass[i]);
        }
        step += 2;
    }
    return 0;
}

void coefficients(double x1, double y1, double x2, double y2)
{
    A = y1 - y2;
    B = x2 - x1;
    C = x1 * y2 - x2 * y1;
}

bool checkingNextPoint(double x, double y)
{
    double equation = A * x + B * y + C;

    if (equation <= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}