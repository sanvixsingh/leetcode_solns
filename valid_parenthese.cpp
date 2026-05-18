class Solution
{
public:
    char stack[10000];
    int top = -1;

    void push(char x)
    {
        if (top >= 10000)
        {
            return;
        }
        stack[++top] = x;
    }

    char pop()
    {
        if (top <= -1)
        {
            return '\0';
        }
        return stack[top--];
    }

    bool isValid(string s)
    {

        // char* e = s;
        int pushcount = 0;
        int popcount = 0;

        for (char e : s)
        {
            if (e == '(' || e == '{' || e == '[')
            {
                push(e);
                pushcount++;
            }
            if (e == ')')
            {
                int x = pop();
                popcount++;
                if (x != '(')
                    return false;
            }
            if (e == '}')
            {
                int x = pop();
                popcount++;
                if (x != '{')
                    return false;
            }
            if (e == ']')
            {
                int x = pop();
                popcount++;
                if (x != '[')
                    return false;
            }
        }
        if (pushcount > popcount)
            return false;
        else
            return true;
    }
};