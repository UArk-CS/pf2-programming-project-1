//
// Created by Ben Worthington on 1/27/21.
//

#include <iostream>
using namespace std;

void printCommandMenu();
void newReviewMenu();

int main() {

    bool stop = false;

    cout << "Ben's Foodie Reviews" << endl;
    cout << endl;
    printCommandMenu();

    while (stop) {

    }

    return 0;

}

void printCommandMenu() {

    cout << "Command Menu:" << endl;
    cout <<"\t1. Enter new review" << endl;
    cout <<"\t2. Print specified Restaurant reviews" << endl;
    cout << "\t3. Print specified food category reviews" << endl;
    cout << "\t4. Print recent reviews" << endl;

}

void newReviewMenu() {



}