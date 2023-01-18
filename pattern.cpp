#include<iostream>
using namespace std;

void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << "*";
        cout << "\n";
    }
}

void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout << "*";
        cout << "\n";
    }
}

void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout << j << " ";
        cout << "\n";
    }
}

void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout << i << " ";
        cout << "\n";
    }
}

void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i+1;j++)
            cout << "* ";
        cout << "\n";
    }
}

void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
            cout << j << " ";
        cout << "\n";
    }
}

void pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i+1;j++)
            cout << " ";

        for(int j=0;j<2*i+1;j++)
            cout << "*";

        for(int j=0;j<=n-i+1;j++)
            cout << " ";
        cout << "\n";
    }
}

void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
            cout << " ";

        for(int j=0;j<2*n-1-2*i;j++)
            cout << "*";

        for(int j=0;j<i;j++)
            cout << " ";
        cout << "\n";
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=0;j<stars;j++)
            cout << "*";
        cout << "\n";
    }
}

void pattern11(int n)
{
    int start=1;
    for(int i=0;i<n;i++)
    {
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++)
        {
            cout << start;
            start = 1-start;
        }
        cout << "\n";
    }
}

void pattern12(int n)
{
    int space=2*(n-1);
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<=i;j++)
        {
            cout << j+1;
        }

        for(int j=0;j<space;j++)
        {
            cout << " ";
        }

        for(int j=i;j>=0;j--)
        {
            cout << j+1;
        }

        cout << "\n";
        space -= 2;
    }
}

int main()
{
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        pattern12(n); 
    }
    
    return 0;
}