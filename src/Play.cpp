#include "functions.h"

using namespace std;

int mass1[4], mass2[4], input;

void zadumannoe()
{
	srand(time(0));
    mass1[0] = rand() % 9 + 1;
    for (int i = 0; i < 4; i++) {
        mass1[i] = rand()%10;
    }
}

void sravnenie() 
{
    for (int i = 3; i > -1; i--) {
        mass2[i] = input % 10;
        input /= 10;
    }
}

int Bulls() 
{
    int bulls = 0;
    for (int i = 0; i < 4; i++) {
        if (mass1[i] == mass2[i]) {
            bulls++;
        }
        
    }
    return bulls;
}

int Cows()
{
    int cows = 0;
    for (int i = 0;  i < 4; i++) {
        for (int k = 0; k < 4; k++) {
            if (mass1[i] == mass2[k] && i != k) {
                cows++;
            }
        } 
    }
    return cows;
}

void game()
{
    int number_of_moves = 0,min = 999, max = 10000;
    zadumannoe();
    cout << "Chislo    Bulls    Cows" << endl;
    for (;;) {
        cin >> input;
        if (input == 0) {
            exit(0);
        } else if (input < max && input > min) {
        	number_of_moves++ ;
            sravnenie();
            cout << "            " << Bulls() << "       " << Cows();
            cout << endl;
            cout << "Number of moves: " << number_of_moves << endl;
            if (Bulls() == 4) {
                cout << "Congratulations! You won!" << endl;
                break;
            }
        } else {
            cout << "Input error, you must enter a four-digit number." << endl;
        }
    }
}

int Play()
{
    char A;
    cout << "Welcome to the BullsandCows game." << endl;
    cout << "I made a four-digit number and your task is to guess it!"  << endl;
    cout << "To make it not so difficult, I will give tips!" << endl;
    cout << "Bulls - means that you guessed the number ";
    cout << "and its location in the number." << endl;
    cout << "Cows - means that you guessed one of the numbers,";
    cout << "but it is not in its place." << endl;
    cout << "_______________________";
    cout << endl;
    for (;;){
        game();
        cout << "Again? Enter (y/n)" << endl;
        cin >> A;
        if (A == 'y') {
            break;
        }else if (A == 'n'){
            exit(0);
        }
    }
    system("pause");
    return 0;
}
