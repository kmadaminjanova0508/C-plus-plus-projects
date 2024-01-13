//**************************************************************************
//File: a1_Madaminjanova.cpp  
//Student: Khalima   
//Assignment: Assignment #1
//Course Name: Computer Programming 2
//Course Number: COSC 1560 
//Due: Tue. January 24 (11.59 PM) 
//Statement of what the program does 
//*****************************************************************************

#include <iostream>
using namespace std;


void main (void)
{
	int days[12] = { 31, 28, 31, 30,
	31, 30, 31, 31,
	30, 31, 30, 31 };
	for (int count = 0;count < 12; count++)
	{
		cout << " Month " << count + 1 << " has ";
		cout << days[count] << "days.\n";
	}
	
}
