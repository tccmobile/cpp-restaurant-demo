// 1. Demonstrating Objects and Classes
#include <iostream>
using namespace std;

class Restaurant {
private:
    string name;
    int rating;

public:
    // Constructor
    Restaurant(string restaurantName = "Unknown", int userRating = 0) {
        name = restaurantName;
        rating = userRating;
    }
    
    // Mutator methods
    void setName(string restaurantName) {
        name = restaurantName;
    }
    void setRating(int userRating) {
        rating = userRating;
    }
    
    // Accessor methods
    string getName() {
        return name;
    }
    int getRating() {
        return rating;
    }
    
    void print() {
        cout << name << " -- " << rating << endl;
    }
};

int main() {
    // Using constructor
    Restaurant favPlace("Central Deli", 4);
    favPlace.print();
    
    // Using mutators
    favPlace.setName("New Deli");
    favPlace.setRating(5);
    
    // Using accessors
    cout << "Updated Restaurant: " << favPlace.getName() << " -- " << favPlace.getRating() << endl;
    
    return 0;
}
