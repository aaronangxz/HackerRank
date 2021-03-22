#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() 
{
    map<string,int> stu_map;
    int Q, Y = 0, type;
    string X;
    cin >> Q;
    for (int q = 0; q < Q ; q++)
    {
        Y = 0;
        cin >> type ;
        if(type == 3 || type == 2) cin >> X;
        else cin >> X >> Y;
        
        if(type == 1)
        {
            cout << "Enter 1 with " << X << ", " << Y << endl;
            if(stu_map.count(X))
            {
                stu_map[X] += Y;
                cout << "Increment " << Y << endl;
            }
            else stu_map.insert(pair<string,int> (X,Y));
            cout << "Insert " << X << ", " << Y << endl;
            cout << X << " is now " << stu_map[X] << endl;
        }
        else if (type == 2) 
        {
            cout << "Enter 2 with " << X << ", " << Y << endl;
            stu_map[X] = 0;
            cout << X << " is now " << stu_map[X] << endl;
        }
        else if (type == 3) 
        {
            cout << "Enter 3 with " << X << ", " << Y << endl;
            cout << stu_map[X] << endl;
        }

       
    }
}



