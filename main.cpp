#include <iostream>

using namespace std;

int readNumber()
{
    int x,y;
    cout << "Vvedite Chislo ";
    cin >> x;
    return x;
}

void writeAnswer(int x)
{
    cout << "Vashe chislo " << x << endl;
}

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer(x+y);
    return 0;
}
