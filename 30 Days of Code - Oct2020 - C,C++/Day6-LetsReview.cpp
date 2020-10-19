#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    string input;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> input;
        
            for (int i = 0; i < input.size(); i++) 
            {
                if (i % 2 == 0) 
                {
                    cout << input[i];
                }
               
            }
            cout << " " ;
            for (int i = 0; i < input.size(); i++) 
            {
                if (i % 2 != 0) 
                {
                    cout << input[i];
                }
            }
            cout << endl;
    }
}
