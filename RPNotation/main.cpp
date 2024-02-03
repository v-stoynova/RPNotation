#include <iostream>
#include <stack>
#include <unordered_set>
#include <string>

using namespace std;

#define PLUS        '+'
#define MINUS       '-'
#define MULTIPLY    '*'
#define DEVIDE      '/'


int evaluate_rpnotation(string &expression)
{
    int result;
    int left_op;
    int right_op;

    string num;
    num.reserve(10);


    stack<int> st;

    unordered_set<char> operations {PLUS, MINUS, MULTIPLY, DEVIDE};


    for (int i = 0; i < expression.length(); i++)
    {
        if (operations.find(expression[i]) != operations.end())
        {
            right_op = st.top();
            st.pop();

            left_op = st.top();
            st.pop();

            // Addition
            if (expression[i] == PLUS)
                result = left_op + right_op;

            // Subtract
            else if (expression[i] == MINUS)
                result = left_op - right_op;

            // Multiplication
            else if (expression[i] == MULTIPLY)
                result = left_op * right_op;

            // Division
            else
                if (right_op == 0)
                    cout << "Error: Division by 0!" << endl;
                else
                    result = left_op / right_op;
            st.push(result);
        }
        else if (expression[i] == ',')
        {
            if (!num.empty())
            {
                st.push(stoi(num));
                num.erase();
            }
        }
        else if (isdigit(expression[i]))
        {
            num.push_back(expression[i]);
        }
        else
        {
            continue;
        }
    }

    return st.top();

}

int main()
{
    string input;

    getline(cin, input);

    cout << evaluate_rpnotation(input);

    return 0;
}
