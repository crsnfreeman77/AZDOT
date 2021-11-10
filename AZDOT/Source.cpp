#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nameFirst, nameLast, reason;
    int licenseNum;

    cout << "What is your first name?\n ";
    getline(cin, nameFirst);
    cout << "What is your last name?\n ";
    getline(cin, nameLast);
    cout << "Hello, " << nameFirst << " " << nameLast << "!\n";

    cout << "What Drivers license number?\n ";
    cin >> licenseNum;
    // 9 numbers

    bool check = true;
    int choice;
    while (check != false) {
        cout << "What is your reason for visiting? (Enter a number)\n";
        cout << "1. Drivers license\n";
        cout << "2. Register Vehicle\n";
        cout << "3. Safety and emissions inspections\n";
        cout << "4. Title transfer\n";
        cout << "5. Other\n";
        cout << "6. Exit\n";


        //program can eventually incorperate more code to get information reguarding these topics
        cin >> choice;
        switch (choice) {
        case 1:
            reason = "Drivers License";
            check = false;
            break;

        case 2:
            reason = "Register Vehicle";
            check = false;
            break;

        case 3:
            reason = "Safety and emissions inspections";
            check = false;
            break;

        case 4:
            reason = "Title transfer";
            check = false;
            break;

        case 5:
            cout << "Please enter your other reason for visit";
            getline(cin, reason);
            check = false;
            break;

        case 6:
            return 0;
            break;

        default:
            cout << "Not a Valid Choice. \n";
            cout << "Choose again.\n";
            break;
        }
    }

    int month;
    int day;
    int year;

    cout << "Please enter a valid date for your appointment.\n";
    cout << "Note that the office is open from 9am - 5pm, Monday through Friday and closed on weekends.\n";
    cout << "Enter the date formatted as MM/DD/YYYY.\n";
    //need to check for valid integers aka month <= 12, day <= 30 or 31 depends on month, year is greater than current year (and date cant be in past)
    cin >> month;
    if (cin.get() != '/') //check for slash between DD and MM
    {
        cout << "expected /\n";

    }
    cin >> day;
    if (cin.get() != '/') //check for slash between MM and YYYY
    {
        cout << "expected /\n";

    }
    cin >> year;
    cout << "input date: " << month << "/" << day << "/" << year << "\n";

    string amorpm;
    cout << "Please enter a valid time slot for your appointment. We are open from 9:00am to 5:00pm\n";
    cout << "Note that the time you choose must be in 30 minute increments. For example you can enter 1:00 or 1:30 but not 1:07.\n";
    cout << "Would you like your meeting to be in the am or pm?\n";
    cin >> amorpm;
    if (amorpm == "am" || amorpm == "AM") {
        //user can only enter time from 9am to 11:30am
        cout << "am check";
    }
    else if (amorpm == "pm" || amorpm == "pm") {
        //user can only enter time from 12pm to 4:30pm
        cout << "am check";
    }


    return 0;
}