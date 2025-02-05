#include <iostream>

using namespace std;

int main() {
cout << "Welcome to the Quiz Program!" << std::endl;
cout << "Please answer the following questions." << std::endl;
int score = 0;


//Frage 1
cout << "Wie viele Beine hat eine Spinne?"  << endl;
cout << "a) 4" << endl;
cout << "b) 8" << endl;
cout << "c) 6" << endl;
cout << "d) 10" << endl;
char answer1;
cin >> answer1;
if (answer1 == 'B' || answer1 == 'b') {
    cout << "Richtig!" << endl;
    score++;
} else {
    cout << "Falsch!" << endl;
}

//Frage 2
cout << "Welcher Planet ist der größte in unserem Sonnensystem?"  << endl;
cout << "a) Mars" << endl;
cout << "b) Erde" << endl;
cout << "c) Jupiter" << endl;
cout << "d) Venus" << endl;
char answer2;
cin >> answer1;
if (answer1 == 'C' || answer1 == 'c') {
    cout << "Richtig!" << endl;
    score++;
} else {
    cout << "Falsch!" << endl;
}

//Frage 3
cout << "Wie viele Kontinente gibt es auf der Erde?"  << endl;
cout << "a) 5" << endl;
cout << "b) 6" << endl;
cout << "c) 7" << endl;
cout << "d) 8" << endl;
char answer3;
cin >> answer1;
if (answer1 == 'C' || answer1 == 'c') {
    cout << "Richtig!" << endl;
    score++;
} else {
    cout << "Falsch!" << endl;
}

//Frage 4
cout << "Welche Farbe entsteht, wenn man Blau und Gelb mischt?"  << endl;
cout << "a) Grün" << endl;
cout << "b) Lila" << endl;
cout << "c) Orange" << endl;
cout << "d) Braun" << endl;
char answer4;
cin >> answer1;
if (answer1 == 'a' || answer1 == 'A') {
    cout << "Richtig!" << endl;
    score++;
} else {
    cout << "Falsch!" << endl;
}


if(score == 4) {
    cout << "Herzlichen Glückwunsch! Du hast die volle Punktzahl erreicht!" << endl;
} else {
    cout << "Du hast " << score << " von 4 Fragen richtig beantwortet!" << endl;
}


    return 0;
}