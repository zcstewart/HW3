//Homework 3

/*
 *  Filename:           main.cpp
 * 
 *  Purpose:            The purpose of this program is to prompt the user for 
 *                      their hourly wage and total hours worked. The program 
 *                      will then output the user's income before taxes,
 *                      income after taxes, money spent on clothes and other 
 *                      accessories, money spent on school supplies, money 
 *                      spent on savings bonds, net income (remaining pay), 
 *                      and the money the parents spent to buy additional 
 *                      savings bonds. The percentage values for each category
 *                      of the budget can be modified and revised.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               1/19/2017 18:45 PST
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    //Declare variables for hourly wage and hours worked
    double hourlyWage = 0;
    double hoursWorked = 0;
    
    //Declare variables for for various income amounts
    double grossIncome = 0;
    double postTaxIncome = 0;
    double postCS_Income = 0;
    double netIncome = 0;
    
    //Declare constant variables for various budget spending percentages
    const double incomeTaxRate = 0.14;
    const double clothesRate = 0.1;
    const double schoolSuppliesRate = 0.01;
    const double savingsBondRate = 0.25;
    const double parentalBondRate = 0.125;
    
    //Declare variables for various budget purchases
    double costClothes = 0;
    double costSchoolSupplies = 0;
    double costBond = 0;
    double parentBond = 0;
    
    //Prompt user for hourly wage and hours worked
    cout << "Welcome to the Summer Accounting Program" << endl << endl;
    cout << "Enter the pay rate per hour: " << endl;
    cin >> hourlyWage;
    cout << "Enter the number of hours worked this week: " << endl;
    cin >> hoursWorked;
    cout << endl;
    
    //Determine Gross Income
    grossIncome = hourlyWage*hoursWorked;
    
    //Income AFTER income tax deductions
    postTaxIncome = grossIncome - (grossIncome*incomeTaxRate);
    
    //Cost of clothes and school supplies
    costClothes = postTaxIncome*clothesRate;
    costSchoolSupplies = postTaxIncome*schoolSuppliesRate;
    
    //Remaining income after purchasing clothes and school supplies
    postCS_Income = postTaxIncome - (costClothes + costSchoolSupplies);
    
    //Money Spent on Bonds and Parental Contribution toward Bonds
    costBond = postCS_Income*savingsBondRate;
    parentBond = postCS_Income*parentalBondRate;
    
    //Remaining Income
    netIncome = postCS_Income - costBond;
    
    //Output Statements
    cout << "Income before taxes: $" << setprecision(2) << fixed
         << grossIncome << endl;
    cout << "Income after taxes: $" << setprecision(2) << fixed
         << postTaxIncome << endl << endl;
    cout << "Clothing costs: $" << setprecision(2) << fixed
         << costClothes << endl;
    cout << "Supplies costs: $" << setprecision(2) << fixed
         << costSchoolSupplies << endl;
    cout << "Bond costs: $" << setprecision(2) << fixed
         << costBond << endl << endl;
    cout << "Remaining pay: $" << setprecision(2) << fixed
         << netIncome << endl;
    cout << "Parent bond contribution: $" << setprecision(2) << fixed
         << parentBond << endl;
    
    //Exit program upon successful completion of tasks
    exit(EXIT_SUCCESS);
}
