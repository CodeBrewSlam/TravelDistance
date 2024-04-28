// Emilio Ramirez
// Travel Distance
// This program calculates the distance a vehicle travels per hour.
// It prompts the user to input the speed of the vehicle and how many hours it has been traveling.
// The program uses this input to calculate how far the vehicle traveled each hour and displays this output on the screen.

#include <iostream>
using namespace std;

int main()
{
    system("cls");

    // Declare constant int variables to limit input amount
    const int MAX_SPEED = 200;
    const int MAX_HOURS = 100;

    // Declare int variables to hold speed, hours, and miles
    int speed = 0;
    int hours = 0;
    int miles = 0;

    // Do-while loop to ask user for speed input and validate input to make sure no negative numbers or numbers over max amount are entered
    do
    {
        system("cls");

        cout << "What is the speed of the vehicle in mph? Range 0 - 200: ";
        cin >> speed;

        // If statement to display error of entering a negative number
        if (speed < 0)
        {          
            cout << "\nERROR - Please enter a positive number.\n\n";
            system("pause");
        }
        // Else if statement to display error of entering number greater than max amount
        else if (speed > MAX_SPEED)
        {           
            cout << "\nERROR - Please enter a number no greater than 200.\n\n";
            system("pause");
        }
    } while (speed < 0 || speed > MAX_SPEED);

    // Do-while loop to ask user for hours input and validate input to make sure no negative numbers or numbers over max amount are entered
    do
    {   
        // If statement to clear screen and re-print above output
        if (hours < 0 || hours > MAX_HOURS)
        {
            system("cls");
            cout << "What is the speed of the vehicle in mph? Range 0 - 200: " << speed << endl;
        }

        cout << "\nHow many hours has it traveled? ";
        cin >> hours;
        
        // If statement to display error of entering a negative number
        if (hours < 0)
        {
            cout << "\nERROR - Please enter a positive number.\n\n";
            system("pause");
        }
        // Else if statement to display error of entering number greater than max amount
        else if (hours > MAX_HOURS)
        {
            cout << "\nERROR - Please enter a number no greater than 100.\n\n";
            system("pause");
        }     
    } while (hours < 0 || hours > MAX_HOURS);

    // Display title for output
    cout << "\nHour\t\tMiles\n";
    cout << "---------------------\n";

    // For loop to iterate through each hour, calculate the distance traveled, and display the hours and miles on screen
    for (int i = 1; i <= hours; i++)
    {
        miles = speed * i;
        cout << i << "\t\t" << miles << "\n";
    }
    
    // If statement to display output if 0 hours are entered
    if (hours == 0)
    {
        cout << "\nVehicle did not travel.\n\n";
    }

    cout << endl;

    system("pause");

    return 0;

}

