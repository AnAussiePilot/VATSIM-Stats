#include <iostream>
#include <string>
#include <curl/curl.h>
#include <stdlib.h>

int main ()
{

    int CID = 0;
    double answer = 0;
    int pin = 0;
    int pen = 0;

    std::cout << "Welcome, please enter a 4 Digit Pin for entry to this program\n";
    std::cin >> pin;
    if (pin>999 && pin<=9999) {
        std::cout << "Valid Pin, Your Unique Number Code is " << pin << "\n";
    }
    else {
        std::cout << "Invalid Pin Code. Your Session will be terminated, and you will be required to reopen\n";
        return 0;
    }
    
    std::cout << "Please enter your 4 Digit Pin\n";
    std::cin >> pin;
     if (pen==pin){
        std::cout << "Welcome to VATSIM Stats Checker, Press Enter to Proceed\n";
    }
    else {
        std::cout << "Try Again\n";
        std::cout << "Please enter your 4 Digit Pin\n";
    std::cin >> pin;
     if (pen==pin){
        std::cout << "Welcome to VATSIM Stats Checker, Press Enter to Proceed\n";
    }
    else {
        std::cout << "Try Again\n";
        
    } 
    }
    

    std::cout << "Hi There. Please input your VATSIM CID into the box down below.\n";
    std::cin >> CID;
    std::cout << "Please confirm that " << CID << " is your CID on VATSIM\nType 1 for yes or 2 for no\n";
    std::cin >> answer;

    if (answer == 1) {
        std::cout << "Do you wish to connect your VATSIM Stats to this Application?\n";
    }
    else
    { while (answer == 2) {
    std::cout << "Lets Try Again, Type in your CID into the box below\n";
    std::cin >> CID;
    std::cout << "Please confirm that " << CID << " is your CID on VATSIM\nType 1 for yes or 2 for no\n";
    std::cin >> answer;
    if (answer == 1) {
        std::cout << "Do you wish to connect your VATSIM Stats to this Application?\nType 1 for Yes 2 for No";
    }
    }
    std::cout << "Lets Try Again, Type in your CID into the box below\n";
    std::cin >> CID;
    std::cout << "Please confirm that " << CID << " is your CID on VATSIM\nType 1 for yes or 2 for no\n";
    std::cin >> answer;
    if (answer == 1) {
        std::cout << "Do you wish to connect your VATSIM Stats to this Application?\nType 1 for Yes 2 for No";
    }
    else
    {
        std::cout << "Due to this application needing your VATSIM STATS to function proplerly, you can restart this process and do it again or check another one of my projects out. :)\n";     
    }
    }
    if (answer == 1) {
    std::cout << "Contacting VATSIM Servers, and Polling the API\nPlease sit tight while this process occurs\nThis may last up to 1 minute depending on internet speed.\n...\n...\n...\n...\n...";
    }
}
