#include<iostream>
using namespace std;
void digits(int number)
{
    int digits;
    while(number > 0)
    {
        number /= 10;
        digits++;
    }
    cout << "Number of digits are " << digits;
}
int main()
{
    int number;
    cin >> number;
    digits(number);
}
