#include<iostream>
#include<vector>
#include<stdexcept>
#include<limits>
#include "Header.h"
#include <iostream>
using namespace std;


double GetMiles()
{
    double mile;
    cout << "Enter Miles:";
    cin >> mile;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "there was an error ";
        throw runtime_error("Invalid input received, you must enter a decimal number");
    }
    else
    {
        if (mile <= 0)
        {
            throw runtime_error("Miles can not be less than 0");
        }
        else
        {
            return mile;
        }
    }
}


double GetGallons()
{
    double gallon;
    cout << "Enter Gallons:";
    cin >> gallon;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "there was an error ";
        throw runtime_error("Invalid input received, you must enter a decimal number");
    }
    else
    {
        if (gallon <= 0)
        {
            throw runtime_error("Gallons can not be less than 0");
        }
        else
        {
            return gallon;
        }
    }
}

double GetMPG(vector<double> miles, vector<double> gallons)
{
    double tot_miles = 0, tot_gallons = 0;
    if (miles.size() == 0 || gallons.size() == 0)
    {
        throw runtime_error("No values recorded. MPG is Nan");
    }
    else
    {
        for (int x = 0; x < miles.size(); x++)
        {
            tot_miles = tot_miles + miles[x];
        }
        for (int x = 0; x < gallons.size(); x++)
        {
            tot_gallons = tot_gallons + gallons[x];
        }
       
            return (double)tot_miles / tot_gallons;
    }
}
