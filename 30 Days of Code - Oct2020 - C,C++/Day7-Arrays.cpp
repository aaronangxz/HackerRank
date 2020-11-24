#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, input;
    vector<int> array;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        array.push_back(input);
    } 
    
    for(int j = n - 1; j >= 0; j--)
    {
        cout << array[j] << " ";
    }
}