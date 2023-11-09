#include <iostream>
#include <string>

using namespace std;

struct Question {
    string content;
    int points;

};

class Test {
public:
    string testName;
    string subject;
    Question questions[100];
    int questionCount = 0;

    void startTestCreationProcess() {
        cout << "Prosze rozpoczac proces tworzenia testu." << endl;
    }

    void addNewTest() {
        cout << "Podaj nazwe testu: ";
        getline(cin, testName);

        cout << "Podaj przedmiot: ";
        getline(cin, subject);

        cout << "Dodano nowy test: " << testName << " z przedmiotu " << subject << endl;
    }

    void addQuestionsToTest() {
        char addMore;
        do {
            cout << "Podaj tresc pytania: ";
            string content;
            getline(cin, content);

            cout << "Podaj ilosc punktow: ";
            int points;
            cin >> points;
            cin.ignore();

            Question newQuestion;
            newQuestion.content = content;
            newQuestion.points = points;

            questions[questionCount] = newQuestion;
            questionCount++;

            cout << "Czy chcesz dodac kolejne pytanie? (T/N): ";
            cin >> addMore;
            cin.ignore();
        } while (addMore == 'T' || addMore == 't');
    }

    void editAndConfigureQuestions() {
        if (questionCount > 0) {
            int selectedQuestion;
            cout << "Podaj numer pytania do edycji (1-" << questionCount << "): ";
            cin >> selectedQuestion;
            cin.ignore();

            if (selectedQuestion >= 1 && selectedQuestion <= questionCount) {
                cout << "Podaj nowa tresc pytania: ";
                getline(cin, questions[selectedQuestion - 1].content);

                cout << "Podaj nowa ilosc punktow: ";
                cin >> questions[selectedQuestion - 1].points;
                cin.ignore();

                cout << "Pytanie zostalo zedytowane." << endl;
            } else {
                cout << "Nieprawidlowy numer pytania." << endl;
            }
        } else {
            cout << "Brak pytan do edycji." << endl;
        }
    }

    void reviewTest() {
        cout << "Przeglad testu..." << endl;
        for (int i = 0; i < questionCount; ++i) {
            cout << "Pytanie " << i + 1 << ": " << questions[i].content << " (Punkty: " << questions[i].points << ")" << endl;
        }
    }

    void saveTest() {
        cout << "Zapisywanie testu..." << endl;
        cout << "Test zostal zapisany." << endl;
    }
};

int main() {
    Test myTest;

    myTest.startTestCreationProcess();

    myTest.addNewTest();

    myTest.addQuestionsToTest();

    myTest.editAndConfigureQuestions();

    // Przegląd testu
    myTest.reviewTest();

    myTest.saveTest();

    return 0;
}


