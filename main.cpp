#include <iostream>
#define rSize 10

using namespace std;

double A = 0;
double B = 0;
double C = 0;

void fillArray(int mass[rSize]);
void coefficients(double x1, double y1, double x2, double y2);
bool checkingNextPoint(double x, double y);



int main() {
    srand(time(NULL));
    int step = 0;
    int mass[rSize] = {0};

    cout << "Enter step: ";
    cin >> step;
    fillArray(mass);
    cout << endl;
    coefficients(0, mass[0], step, mass[step]);
    for(int i = step; i <= rSize; i++){
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

void fillArray(int mass[rSize]){
    for(int i = 0; i < rSize; i++){
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
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