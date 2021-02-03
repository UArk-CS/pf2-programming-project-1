//
// Created by Ben Worthington on 1/27/21.
//

#include <iostream>
#include "Review.h"
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
                newReviewMenu();
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

    string reviewerName;
    string restaurantName;
    string foodCategory;
    int deliveryTimeRating = 0;
    int foodQualityRating = 0;
    int overallSatisfactionRating = 0;
    float deliveryCost = 0.0;

    Review review;

    cout << "New Review:" << endl;

    // Flush cin buffer
    cin.ignore();

    cout << "\tYour name: > ";
    getline(cin, reviewerName);
    review.setReviewerName(reviewerName);

    cout << "\tRestaurant Name: > ";
    getline(cin, restaurantName);
    review.setRestaurantName(restaurantName);

    cout << "\tFood Category: > ";
    getline(cin, foodCategory);
    review.setFoodCategory(foodCategory);

    cout << "\tDelivery Cost: > $";
    cin >> deliveryCost;
    if (deliveryCost < 0.0) {
        deliveryCost = 0.0; // default value
    }
    review.setDeliveryCost(deliveryCost);

    cout << "\tDelivery Time Rating (1-10): > ";
    cin >> deliveryTimeRating;
    if (deliveryTimeRating < 1 || deliveryTimeRating > 10) {
        deliveryTimeRating = 1; // default value
    }
    review.setDeliveryTimeRating(deliveryTimeRating);

    cout << "\tFood Quality Rating (1-10): > ";
    cin >> foodQualityRating;
    if (foodQualityRating < 1 || foodQualityRating > 10) {
        foodQualityRating = 1; // default value
    }
    review.setFoodQualityRating(foodQualityRating);

    cout << "\tOverall Satisfaction (1-10): > ";
    cin >> overallSatisfactionRating;
    if (overallSatisfactionRating < 1 || overallSatisfactionRating > 10) {
        overallSatisfactionRating = 1; // default value
    }
    review.setOverallSatisfactionRating(overallSatisfactionRating);

    review.print();

}