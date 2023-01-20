#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
void digits(int number)
{
    // using conventional divide by 10 method - O(n) where n is number of digits
    int digits;
    while(number > 0)
    {
        number /= 10;
        digits++;
    }
    cout << "Number of digits are " << digits;

    /* method 2 - convert number to string and find the length of the string - O(1)
        string num = to_string(number);
        cout << num.length();
    */

    /* method 3 - use log base 10 method - O(1)
        cout << floor(log10(number)+1);
    */

}
int main()
{
    int number;
    cin >> number;
    digits(number);
}
