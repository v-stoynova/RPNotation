#include "UnitTest++.h"
#include "RPNotation.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    getline(cin, input);

    cout << "Result from the evaluation: " << evaluate_rpnotation(input) << endl;

    return UnitTest::RunAllTests();
}
