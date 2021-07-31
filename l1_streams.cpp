#include <iostream>
#include <sstream>

using std::cout;
using std::cin;   
using std::endl;
using std::string;

int stringToInteger(const string& s) {
    std::istringstream iss(s);

    int value;

    iss >> value;

    // Check for logical error on i/o operation
    if (iss.fail()) throw std::domain_error("Failbit is set");

    // Check for End-of-File reached on input operation
    if (!iss.eof()) throw std::domain_error("More than a single valid int");

    return value;
}

int main() {
    while (true) {
        cout << "Type in an integer: ";

        string s;

        if (!getline(cin, s)) throw std::domain_error("getline failed");

        cout << "You typed in: " << s << "\n";

        int result = stringToInteger(s);

        cout << "As an integer, this is: " << result << "\n";

        cout << "Half of that is: " << result/2 << endl;
    }
    return 0;
}


