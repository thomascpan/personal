#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class NoMilk {
public:
    NoMilk() {};
    NoMilk(int howMany) : count(howMany) {};
    int getCount() const { return count; }
private:
    int count;
};

class NegativeNumber {
public:
    NegativeNumber() {};
    NegativeNumber(string theMessage) : message(theMessage) {}
    string getMessage() const { return message; }
private:
    string message;
};

class DivideByZero {

};

double safeDivide(int top, int bottom) throw (DivideByZero);


int main() {
    int pencils, erasers;
    double ppe;

    try {
        cout << "How many pencils do you have?\n";
        cin >> pencils;

        if (pencils < 0)
            throw NegativeNumber("pencils");
        cout << "How many erasers do you have?\n";
        cin >> erasers;
        if (erasers < 0)
            throw NegativeNumber("erasers");
        ppe = safeDivide(pencils, erasers);
        cout << "Each eraser must last through "
             << ppe << " pencils.\n";
    } catch(NegativeNumber e) {
        cout << "Cannot have a negative number of "
             << e.getMessage() << endl;
    } catch(DivideByZero) {
        cout << "Do not make any mistakes.\n";
    } catch(...) {
        cout << "Unexplained exception.\n";
    }
    return 0;
}

double safeDivide(int top, int bottom) throw (DivideByZero) {
    if (bottom == 0)
        throw DivideByZero();

    return top / static_cast<double>(bottom);
}