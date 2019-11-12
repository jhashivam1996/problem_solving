#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    string exp = "24+3-5*";
    for (int i = 0; i < 8; i++)
    {
        if (exp[i] >= '0' && exp[i] <= '9')
            s.push(exp[i] - '0');
        else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
        {
            int op1 = s.top();
            s.pop();
            int op2 = s.top();
            s.pop();
            if (exp[i] == '+')
                s.push(op2 + op1);
            else if (exp[i] == '-')
                s.push(op2 - op1);
            else if (exp[i] == '*')
                s.push(op2 * op1);
            else if (exp[i] == '/')
                s.push(op2 / op1);
        }
    }

    int result = s.top();
    s.pop();
    if (s.empty())
        cout << "result: " << result;
    else
        cout << "Not able to calculate result.";
}
