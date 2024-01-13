//*****************************************************************************************************
//File: a5_Madaminjonova.cpp  
//Student: Khalima 
//Assignment: Assignment #4
//Course Name: Computer Programming 2
//Course Number: COSC 1550  
//Due: Fabuary 26 (23:59)
//Statement of what the program does 
//*****************************************************




#include <iostream>
#include <iomanip>

using namespace std;

void calcSales(const int[], const double[], double[], int);
void showOrder(const double[], const int[], int);
void dualSort(int[], double[], int);
void showTotals(const double[], const int[], int);


const int NUM_PRODS = 9;

int main()
{

    int id[NUM_PRODS] = { 914, 915, 916, 917, 918, 919, 920,921, 922 };
    int units[NUM_PRODS] = { 842, 416, 127, 514, 437, 269, 97,492, 212 };
    double prices[NUM_PRODS] = { 12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95 };
    double sales[NUM_PRODS];
    calcSales(units, prices, sales, NUM_PRODS);
    dualSort(id, sales, NUM_PRODS);
    cout << setprecision(2) << fixed << showpoint;
    showOrder(sales, id, NUM_PRODS);
    showTotals(sales, units, NUM_PRODS);
    return 0;
}
void calcSales(const int units[], const double prices[], double sales[], int num)
{
    for (int index = 0; index < num; index++)
        sales[index] = units[index] * prices[index];
}
void dualSort(int id[], double sales[], int size)
{
    int startScan, maxIndex, tempid;
    double maxValue;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        maxIndex = startScan;
        maxValue = sales[startScan];
        tempid = id[startScan];
        for (int index = startScan + 1; index < size; index++) {
            if (sales[index] > maxValue)
            {
                maxValue = sales[index];
                tempid = id[index];
                maxIndex = index;
            }
        }
        sales[maxIndex] = sales[startScan];
        id[maxIndex] = id[startScan];
        sales[startScan] = maxValue;
        id[startScan] = tempid;
    }
}
void showOrder(const double sales[], const int id[], int num)
{
    cout << "Product Number\tSales\n";
    cout << "----------------------------------\n";
    for (int index = 0; index < num; index++)
    {
        cout << id[index] << "\t\t$";
        cout << setw(8) << sales[index] << endl;
    }
    cout << endl;
}
void showTotals(const double sales[], const int units[], int num)
{
    int totalUnits = 0;
    double totalSales = 0.0;
    for (int index = 0; index < num; index++)
    {
        totalUnits += units[index];
        totalSales += sales[index];
    }
    cout << "Total Units Sold: " << totalUnits << endl;
    cout << "Total Sales: $" << totalSales << endl;
}