#include<iostream>
#include<vector>
#include<stdexcept>
#include<limits>
#include "Header.h"
#include <iostream>


using namespace std;

int main()
{
    vector<double> miles;
    vector<double> gallons;
    double m, m1;
    char ans = 'y';
    while (ans == 'y')
    {
        try
        {
            m = GetMiles();
            if (m > 0)
                miles.push_back(m);
            m1 = GetGallons();
            if (m1 > 0)
                gallons.push_back(m1);
            for (int x = 0; x != miles.size(); ++x)
            {
                
            }
            for (int x = 0; x != gallons.size(); ++x)
            {
                
            }
        }
        catch (runtime_error& excpt)
        {
            cout << excpt.what() << endl;
        }
        cout << "Want to enter another tank (y/n)? ";
        cin >> ans;
      
        if (ans == 'n')
            break;
    }
    try
    {
     
        m = GetMPG(miles, gallons);
        cout << "\nMiles per Gallon is " << m << endl;
    }
    catch (runtime_error& excpt)
    {
        cout << excpt.what() << endl;
    }
    return 0;
}


