#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int base10to2(int n)
{
    int sum = 0, i = 0;
    while (n > 0)
    {
        sum += (n % 2) * pow(10,i);
        n/=2;
        i++;
    }
    return sum;
}

int count1 (int n)
{
    
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}
