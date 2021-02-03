//
// Created by Ben Worthington on 1/27/21.
//

#ifndef PF2_PROGRAMMING_PROJECT_1_REVIEW_H
#define PF2_PROGRAMMING_PROJECT_1_REVIEW_H

#include <iostream>
using namespace std;

class Review {

public:
    // Constructors and Destructor
    Review();
    Review(const Review &copy);
    ~Review();

    // Getters and Setters
    const string &getReviewerName() const;
    void setReviewerName(const string &reviewerName_);

    const string &getRestaurantName() const;
    void setRestaurantName(const string &restaurantName_);

    const string &getFoodCategory() const;
    void setFoodCategory(const string &foodCategory_);

    float getDeliveryCost() const;
    void setDeliveryCost(float deliveryCost_);

    int getDeliveryTimeRating() const;
    void setDeliveryTimeRating(int deliveryTimeRating_);

    int getFoodQualityRating() const;
    void setFoodQualityRating(int foodQualityRating_);

    int getOverallSatisfactionRating() const;
    void setOverallSatisfactionRating(int overallSatisfactionRating_);

    // Print
    void print() const;

private:
    string reviewerName;
    string restaurantName;
    string foodCategory;
    float deliveryCost;
    int deliveryTimeRating;
    int foodQualityRating;
    int overallSatisfactionRating;

};


#endif //PF2_PROGRAMMING_PROJECT_1_REVIEW_H
