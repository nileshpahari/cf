//cleaner solution by converting the year to a string and returning a bool val, based on the equality of the size of the string with the size of the set created from from its characters
//SOURCE: GPT

#include <iostream>
#include <string>
#include <set>
using namespace std;

// Function to check if a year has distinct digits
bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits(yearStr.begin(), yearStr.end());
    return digits.size() == yearStr.size(); // Check if all characters are unique
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++; // Increment the year
        if (hasDistinctDigits(y)) {
            cout << y << endl; // Output the first valid year
            break;
        }
    }

    return 0;
}
