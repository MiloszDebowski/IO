#include <iostream>
#include <string>

using namespace std;

// Test
class Test {
public:
    string testName;
    string testContent;

    void displayTest() const {
        cout << "TEST: " << testContent << endl;
    }
};

// Builder class
class TestBuilder {
public:
    virtual void buildTestName() = 0;
    virtual void buildTestContent() = 0;
    virtual Test getTest() const = 0;
};

// Concrete builder
class SimpleTestBuilder : public TestBuilder {
private:
    Test test;

public:
    void buildTestName() override {
        test.testName = "Test";
    }

    void buildTestContent() override {
        test.testContent = "Zawartosc";
    }

    Test getTest() const override {
        return test;
    }
};

// Director class
class TestDirector {
public:
    Test constructTest(TestBuilder& builder) {
        builder.buildTestName();
        builder.buildTestContent();
        return builder.getTest();
    }
};

int main() {
    TestDirector testDirector;
    
    SimpleTestBuilder simpleBuilder;
    Test simpleTest = testDirector.constructTest(simpleBuilder);
    simpleTest.displayTest();

    return 0;
}
