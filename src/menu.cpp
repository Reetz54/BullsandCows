#include "functions.h"

int Menu(){
    int a = 0;
    system("clear");
    cout << "   Enter 'Start' to quit " << endl;
    cout << " Enter 'Exit' to start play" << endl;
    while (a == 0) {
        string Write;
        cin >> Write;
        if (Write == "Start") {
            system("clear");
            Play();
        }
        else if (Write == "Exit"){
            system("clear");
            exit(0);
        }
        else {
            cout << "Input Error.";
        }
    }
    return 0;
}
