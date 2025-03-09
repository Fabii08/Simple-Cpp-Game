/*
Copyright © 2025 https://github.com/Fabii08?tab=repositories  
All rights reserved.  
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the Quiz Program!" << std::endl;
    cout << "Please answer the following questions." << std::endl;
    int score = 0;

    // Question 1
    cout << "How many legs does a spider have?" << endl;
    cout << "a) 4" << endl;
    cout << "b) 8" << endl;
    cout << "c) 6" << endl;
    cout << "d) 10" << endl;
    char answer1;
    cin >> answer1;
    if (answer1 == 'B' || answer1 == 'b') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }

    // Question 2
    cout << "Which planet is the largest in our solar system?" << endl;
    cout << "a) Mars" << endl;
    cout << "b) Earth" << endl;
    cout << "c) Jupiter" << endl;
    cout << "d) Venus" << endl;
    char answer2;
    cin >> answer2;
    if (answer2 == 'C' || answer2 == 'c') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }

    // Question 3
    cout << "How many continents are there on Earth?" << endl;
    cout << "a) 5" << endl;
    cout << "b) 6" << endl;
    cout << "c) 7" << endl;
    cout << "d) 8" << endl;
    char answer3;
    cin >> answer3;
    if (answer3 == 'C' || answer3 == 'c') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }

    // Question 4
    cout << "What color do you get when you mix blue and yellow?" << endl;
    cout << "a) Green" << endl;
    cout << "b) Purple" << endl;
    cout << "c) Orange" << endl;
    cout << "d) Brown" << endl;
    char answer4;
    cin >> answer4;
    if (answer4 == 'A' || answer4 == 'a') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }

    if(score == 4) {
        cout << "Congratulations! You got all questions right!" << endl;
    } else {
        cout << "You got " << score << " out of 4 questions right!" << endl;
    }

    return 0;
}
