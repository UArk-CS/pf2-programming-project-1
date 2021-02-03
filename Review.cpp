//
// Created by Ben Worthington on 1/27/21.
//

#include "Review.h"

Review::Review() {

    reviewerName = "";
    restaurantName = "";
    foodCategory = "";
    deliveryCost = 0.0;
    deliveryTimeRating = 0;
    foodQualityRating = 0;
    overallSatisfactionRating = 0;

}

Review::Review(const Review &copy) {

    reviewerName = copy.reviewerName;
    restaurantName = copy.restaurantName;
    foodCategory = copy.foodCategory;
    deliveryCost = copy.deliveryCost;
    deliveryTimeRating = copy.deliveryTimeRating;
    foodQualityRating = copy.foodQualityRating;
    overallSatisfactionRating = copy.overallSatisfactionRating;

}

Review::~Review() {}

const string &Review::getReviewerName() const {
    return reviewerName;
}

void Review::setReviewerName(const string &reviewerName_) {
    Review::reviewerName = reviewerName_;
}

const string &Review::getRestaurantName() const {
    return restaurantName;
}

void Review::setRestaurantName(const string &restaurantName_) {
    Review::restaurantName = restaurantName_;
}

const string &Review::getFoodCategory() const {
    return foodCategory;
}

void Review::setFoodCategory(const string &foodCategory_) {
    Review::foodCategory = foodCategory_;
}

float Review::getDeliveryCost() const {
    return deliveryCost;
}

void Review::setDeliveryCost(float deliveryCost_) {
    Review::deliveryCost = deliveryCost_;
}

int Review::getDeliveryTimeRating() const {
    return deliveryTimeRating;
}

void Review::setDeliveryTimeRating(int deliveryTimeRating_) {
    Review::deliveryTimeRating = deliveryTimeRating_;
}

int Review::getFoodQualityRating() const {
    return foodQualityRating;
}

void Review::setFoodQualityRating(int foodQualityRating_) {
    Review::foodQualityRating = foodQualityRating_;
}

int Review::getOverallSatisfactionRating() const {
    return overallSatisfactionRating;
}

void Review::setOverallSatisfactionRating(int overallSatisfactionRating_) {
    Review::overallSatisfactionRating = overallSatisfactionRating_;
}

void Review::print() const {

    cout << "Reviewer Name: " << reviewerName << endl;
    cout << "Restaurant Name: " << restaurantName << endl;
    cout << "Food Category: " << foodCategory << endl;
    cout << "Delivery Cost: $" << deliveryCost << endl;
    cout << "Delivery Time Rating: " << deliveryTimeRating << endl;
    cout << "Food Quality Rating: " << foodQualityRating << endl;
    cout << "Overall Satisfaction Rating: " << overallSatisfactionRating << endl;

}