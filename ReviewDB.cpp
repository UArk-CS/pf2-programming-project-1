//
// Created by Ben Worthington on 2/3/2021.
//

#include "ReviewDB.h"

ReviewDB::ReviewDB() {
    numOfReviews = 0;
}

ReviewDB::~ReviewDB() {}

void ReviewDB::insertReview(Review &review_) {

    if (numOfReviews < MAX_REVIEWDB_SIZE) {

        reviews[numOfReviews] = review_;
        numOfReviews++;

    } else {

        cout << "Sorry! Ben's Foodie Review database is full! Whoops..." << endl;

    }


}

void ReviewDB::printRestaurantReviews(const string &restaurant) const {

    for (int i = 0; i < MAX_REVIEWDB_SIZE; i++) {

        if (reviews[i].getRestaurantName() == restaurant) {

            reviews[i].print();
            cout << endl;

        }

    }

}

void ReviewDB::printCategoryReviews(const string &category) const {

    for (int i = 0; i < MAX_REVIEWDB_SIZE; i++) {

        if (reviews[i].getFoodCategory() == category) {

            reviews[i].print();
            cout << endl;

        }

    }

}

void ReviewDB::printRecentReview() const {

    reviews[numOfReviews - 1].print();
    cout << endl;

}

void ReviewDB::test() {

    ReviewDB testArray;

    Review test1;
    test1.setReviewerName("Ben W");
    test1.setRestaurantName("Taco Bell");
    test1.setFoodCategory("Mexican");
    test1.setDeliveryCost(3.4);
    test1.setDeliveryTimeRating(7);
    test1.setFoodQualityRating(7);
    test1.setOverallSatisfactionRating(8);

    Review test2(test1);
    test2.setReviewerName("Josh G");
    test2.setRestaurantName("Tropical Smoothie");
    test2.setFoodCategory("Smoothie");
    test2.setDeliveryCost(5.0);
    test2.setOverallSatisfactionRating(10);

    Review test3(test2);
    test3.setReviewerName("Jackson D");
    test3.setDeliveryTimeRating(8);

    Review test4(test1);
    test4.setReviewerName("Jackson P");
    test4.setFoodQualityRating(6);
    test4.setOverallSatisfactionRating(7);

    testArray.reviews[0] = test1;
    testArray.reviews[1] = test2;
    testArray.reviews[2] = test3;
    testArray.reviews[3] = test4;

    cout << "Reviews for Tropical Smoothie..." << endl;
    testArray.printRestaurantReviews("Tropical Smoothie");
    cout << endl;

    cout << "Reviews for Mexican food..." << endl;
    testArray.printCategoryReviews("Mexican");
    cout << endl;


}