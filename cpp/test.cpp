#include <iostream>
using namespace std;
int main()
{
    int toan, ly, hoa;
    cin >> toan >> ly >> hoa;
    int hstoan, hsly, hshoa;
    cin >> hstoan >> hsly >> hshoa;
    int avg;
    avg = (toan*hstoan + ly*hsly + hoa*hshoa)/(hstoan + hsly + hshoa);
    cout << avg;
}