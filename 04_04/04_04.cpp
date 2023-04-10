#include <iostream>

using namespace std;

class Food {
public:
    virtual void prepare() = 0;
};

class Breakfast : public Food {
public:
    void prepare() override {
        cout << "Prepare eggs. Warm up the bread. Make a coffee." << endl;
    }
};

class Lunch : public Food {
public:
    void prepare() override {
        cout << "Cook a salad. Bake potatos. Cook beaf." << endl;
    }
};

class Dinner : public Food {
public:
    void prepare() override {
        cout << "Bake salmon. Cook rice. Grill vegetables." << endl;
    }
};

class Person {
public:
    void eat(Food* food) {
        food->prepare();
    }
};


int main()
{
    Breakfast breakfast;
    Lunch lunch;
    Dinner dinner;
    Person pers;
    pers.eat(&breakfast);
    pers.eat(&lunch);
    pers.eat(&dinner);
}

