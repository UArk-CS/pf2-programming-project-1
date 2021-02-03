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

void ReviewDB::printRestaurantReviews() const {

}

void ReviewDB::printCategoryReviews() const {

}

void ReviewDB::printRecentReviews() const {

}