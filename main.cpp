//
// Created by Ben Worthington on 1/27/21.
//

#include <iostream>
using namespace std;

void commandMenu(int &menuChoice);
void newReviewMenu();

int main() {

    bool stop = false;
    int menuChoice = 0;

    cout << "Ben's Foodie Reviews" << endl;
    cout << endl;

    while (!stop) {

        commandMenu(menuChoice);

        switch (menuChoice) {

            case 1:
                // New review
                cout << "New review case" << endl;
                break;
            case 2:
                // Print specified restaurant reviews
                cout << "Print restaurant reviews case" << endl;
                break;
            case 3:
                // Print specified food category reviews
                cout << "Print food cateogry reviews case" << endl;
                break;
            case 4:
                // Print recent reviews
                cout << "Print recent reviews case" << endl;
                break;
            case 5:
                // Quit
                stop = true;
                break;
            default:
                break;

        }

    }

    return 0;

}

void commandMenu(int &menuChoice) {

    cout << "Command Menu:" << endl;
    cout <<"\t1. Enter new review" << endl;
    cout <<"\t2. Print specified Restaurant reviews" << endl;
    cout << "\t3. Print specified food category reviews" << endl;
    cout << "\t4. Print recent reviews" << endl;
    cout << "\t5. Quit" << endl;

    cout << "Enter a selection (1-5): > ";
    cin >> menuChoice;

    if (menuChoice < 1 || menuChoice > 5) {

        cout << "Invalid selection. Please try again." << endl;
        cout << endl;
        commandMenu(menuChoice);

    }

    cout << endl;

}

void newReviewMenu() {



}