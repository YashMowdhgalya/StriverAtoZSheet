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

void reverse(int number)
{
    //O(logn)
    int rev = 0;
    while(number != 0)
    {
        int lastDigit = number % 10;
        rev = rev * 10 + lastDigit;
        number /= 10; 
    }
    cout << rev;
}

void palindrome(int number)
{
    // O(logn)
    int rev = 0;
    int copy = number;
    while(number != 0)
    {
        int lastDigit = number % 10;
        rev = rev * 10 + lastDigit;
        number /= 10; 
    }
    if(copy == rev)
        cout << "Given number is a palindrome";
    else
        cout << "Given number is not a palindrome";

}

void HCF(int number1,int number2)
{
    //method 1 - brute force - O(n) where n is min(number1,number2)
    int min = (number1 > number2) ? number2 : number1;
    int gcd = 1;
    for(int i=2;i <= min; i++ )
    {
        if((number1 % i == 0) && (number2 % i == 0))
            gcd = i;
    }
    cout << gcd;

    /* using Euclidean's method - O(log(min(a,b)))

        // iterative method
        while(number1 !=0 && number2 !=0)
        {
            if(number1>number2) number1 = number1 % number2;
            else number2 = number2 % number1;
        }
        if(number1 == 0) cout << "GCD/HCF of given two numbers is" << number2;
        else cout << "GCD/HCF of given two numbers is" << number1;

        //recursive method
        if (number2 == 0) 
		    return number1;
	    return gcd(number2, number1 % number2);
    */
    
}

void armstrong(int number)
{
    // O(n) where n is the number of digits
    int copy = number;
    int arm = 0;
    while(number != 0)
    {
        int lastDigit = number % 10;
        arm += (lastDigit * lastDigit * lastDigit);
        number /= 10;
    }
    if(copy == arm) cout << "Given number is Armstrong number";
    else cout << "Given number is not an Armstrong number";
}

void divisors(int number)
{
    // brute force - O(n) 
    for(int i=1;i<=number;i++)
    {
        if(number % i == 0) cout << i << " ";
    }

    /*better approach - o(sqrt(n))
    for(int i=1;i*i<=n;i++)
    {
        if(number % i == 0) cout << i;
        if(i != number/i) cout << n/i;
    }

    */
}

void prime(int number)
{
    //brute force - O(n)
    for(int i=2;i<number;i++)
    {
        if(number % i ==0)
        {
            cout << "false";
            return;
        }
    }
    cout << "true";
    /* optimized approach - O(sqrt(n))
        for(int i=2;i*i<n;i++)
        {
            if(number % i ==0)
            {
                cout << "false";
                return;
            }
            cout << "true";
        }
    */
}

int main()
{
    int number,number1,number2;
    cin >> number;
    prime(number);
    
}
