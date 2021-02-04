//
// Created by Ben Worthington on 1/27/21.
//

#include <iostream>
#include <algorithm>
#include "ReviewDB.h"
using namespace std;

void commandMenu(int &menuChoice);
void createNewReview(ReviewDB &foodieReviews);
void getSearchParameter(string &searchParam);

int main() {

    ReviewDB foodieReviews;

    bool stop = false;
    int menuChoice = 0;
    string searchParam;

    cout << "Ben's Foodie Reviews" << endl;
    cout << endl;

    while (!stop) {

        commandMenu(menuChoice);

        switch (menuChoice) {

            case 1:
                // New review
                createNewReview(foodieReviews);
                break;
            case 2:
                // Print specified restaurant reviews
                cout << "Print specified Restaurant Reviews" << endl;
                getSearchParameter(searchParam);
                cout << endl;
                cout << "Results:" << endl;
                cout << endl;
                foodieReviews.printRestaurantReviews(searchParam);
                break;
            case 3:
                // Print specified food category reviews
                cout << "Print specified Food Reviews" << endl;
                getSearchParameter(searchParam);
                cout << endl;
                cout << "Results:" << endl;
                cout << endl;
                foodieReviews.printCategoryReviews(searchParam);
                break;
            case 4:
                // Print recent reviews
                foodieReviews.printRecentReview();
                break;
            case 5:
                // Test Review Class
                cout << "Testing Review Class..." << endl;
                cout << endl;
                Review::test();
                break;
            case 6:
                // Test ReviewDB Class
                cout << "Testing ReviewDB Class..." << endl;
                cout << endl;
                ReviewDB::test();
                break;
            case 7:
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
    cout << "\t4. Print most recent review" << endl;
    cout << "\t5. Test Review Class" << endl;
    cout << "\t6. Test ReviewDB Class" << endl;
    cout << "\t7. Quit" << endl;

    cout << "Enter a selection (1-7): > ";
    cin >> menuChoice;

    if (menuChoice < 1 || menuChoice > 7) {

        cout << "Invalid selection. Please try again." << endl;
        cout << endl;
        commandMenu(menuChoice);

    }

    cout << endl;

}

void createNewReview(ReviewDB &foodieReviews) {

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
    transform(reviewerName.begin(), reviewerName.end(), reviewerName.begin(), ::toupper);
    review.setReviewerName(reviewerName);

    cout << "\tRestaurant Name: > ";
    getline(cin, restaurantName);
    transform(restaurantName.begin(), restaurantName.end(), restaurantName.begin(), ::toupper);
    review.setRestaurantName(restaurantName);

    cout << "\tFood Category: > ";
    getline(cin, foodCategory);
    transform(foodCategory.begin(), foodCategory.end(), foodCategory.begin(), ::toupper);
    review.setFoodCategory(foodCategory);

    cout << "\tDelivery Cost: > $";
    cin >> deliveryCost;
    while (deliveryCost < 0.0) {

        cout << "Invalid input. Please enter a real number." << endl;
        cout << "\tDelivery Cost: > $";
        cin >> deliveryCost;

    }
    review.setDeliveryCost(deliveryCost);

    cout << "\tDelivery Time Rating (1-10): > ";
    cin >> deliveryTimeRating;
    while (deliveryTimeRating < 1 || deliveryTimeRating > 10) {

       cout << "Invalid input. Please enter a number 1 - 10." << endl;
       cout << "\tDelivery Time Rating (1-10): > ";
       cin >> deliveryTimeRating;

    }
    review.setDeliveryTimeRating(deliveryTimeRating);

    cout << "\tFood Quality Rating (1-10): > ";
    cin >> foodQualityRating;
    while (foodQualityRating < 1 || foodQualityRating > 10) {

        cout << "Invalid input. Please enter a number 1 - 10." << endl;
        cout << "\tFood Quality Rating (1-10): > ";
        cin >> foodQualityRating;

    }
    review.setFoodQualityRating(foodQualityRating);

    cout << "\tOverall Satisfaction (1-10): > ";
    cin >> overallSatisfactionRating;
    while (overallSatisfactionRating < 1 || overallSatisfactionRating > 10) {

        cout << "Invalid input. Please enter a number 1 - 10." << endl;
        cout << "\tOverall Satisfaction (1-10): > ";
        cin >> overallSatisfactionRating;

    }
    review.setOverallSatisfactionRating(overallSatisfactionRating);
    cout << endl;

    foodieReviews.insertReview(review);

}

void getSearchParameter(string &searchParam) {

    cout << "Search Parameter: > ";
    cin.ignore();
    getline(cin, searchParam);
    transform(searchParam.begin(), searchParam.end(), searchParam.begin(), ::toupper);

}