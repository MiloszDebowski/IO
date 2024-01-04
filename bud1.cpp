#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Question {
    string content;
    int points;
};

class Test {
public:
    string testName;
    string subject;
    vector<Question> questions;

    void reviewTest() const {
        cout << "Przeglad testu..." << endl;
        for (size_t i = 0; i < questions.size(); ++i) {
            cout << "Pytanie " << i + 1 << ": " << questions[i].content << " (Punkty: " << questions[i].points << ")" << endl;
        }
    }

    void saveTest() const {
        cout << "Zapisywanie testu..." << endl;
        cout << "Test zostal zapisany." << endl;
    }
};

class TestBuilder {
protected:
    Test test;

public:
    virtual void buildTestNameAndSubject() = 0;
    virtual void buildQuestions() = 0;
    virtual void reset() {
        test = Test();
    }
    virtual ~TestBuilder() {}
};

class DefaultTestBuilder : public TestBuilder {
public:
    void buildTestNameAndSubject() override {
        cout << "Podaj nazwe testu: ";
        getline(cin, test.testName);

        cout << "Podaj przedmiot: ";
        getline(cin, test.subject);

        cout << "Dodano nowy test: " << test.testName << " z przedmiotu " << test.subject << endl;
    }

    void buildQuestions() override {
        char addMore;
        do {
            cout << "Podaj tresc pytania: ";
            string content;
            getline(cin, content);

            cout << "Podaj ilosc punktow: ";
            int points;
            cin >> points;
            cin.ignore();

            test.questions.push_back({ content, points });

            cout << "Czy chcesz dodac kolejne pytanie? (T/N): ";
            cin >> addMore;
            cin.ignore();
        } while (addMore == 'T' || addMore == 't');
    }

    void reset() override {
        TestBuilder::reset();
        test.questions.clear();
    }

    Test getResult() {
        return test;
    }
};

class TestDirector {
public:
    void createTest(TestBuilder& builder) {
        builder.buildTestNameAndSubject();
        builder.buildQuestions();
    }
};

int main() {
    DefaultTestBuilder defaultBuilder;
    TestDirector director;

    director.createTest(defaultBuilder);

    Test myTest = defaultBuilder.getResult();

    // Przegląd testu
    myTest.reviewTest();

    // Zapis testu
    myTest.saveTest();

    return 0;
}
