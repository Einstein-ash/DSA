class Solution {
public:
    bool isNumber(string s) {
        int minuses = 0;
        int pluses = 0;
        int dots = 0;
        int es = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '-' && i > 0)
                return false;

            if (s[i] == '-' && i < s.size() - 1 && s[i + 1] == '+')
                return false;
            if (s[i] == '+' && i < s.size() - 1 && s[i + 1] == '-')
                return false;
            if (s[i] == '-' && i < s.size() - 1 && s[i + 1] == '-')
                return false;
            if (s[i] == '+' && i < s.size() - 1 && s[i + 1] == '+')
                return false;

            if (s[i] == '-' && s.size() == 1)
                return false;
            if (s[i] == '+' && s.size() == 1)
                return false;
            if (s[i] == 'e' && s.size() == 1)
                return false;
            if (s[i] == 'E' && s.size() == 1)
                return false;
            if (s[i] == '.' && s.size() == 1)
                return false;

            if (s[i] == '.')
                dots++;
            if (dots > 1)
                return false;

            if (s[i] == '-')
                minuses++;
            if (s[i] == '-' && i == s.size() - 1)
                return false;
            if (minuses > 1)
                return false;

            if (s[i] == '+')
                pluses++;
            if (pluses > 1)
                return false;
            if (s[i] == '+' && i == s.size() - 1)
                return false;

            if ((s[i] == 'e') || (s[i] == 'E'))
                es++;
            if (es > 1)
                return false;
            if (((s[i] == 'E') || (s[i] == 'e')) && i == s.size() - 1)
                return false;

            if (((s[i] == 'e') || (s[i] == 'E')) && i < s.size() - 1 &&
                (((s[i + 1] <= '0') || (s[i + 1] >= '9')) &&
                 (s[i + 1] != '-') && (s[i + 1] != '+')))
                return false;

            if (((s[i] == 'e') || (s[i] == 'E')) && i > 0 &&
                (((s[i - 1] <= '0') || (s[i - 1] >= '9')) &&
                 ((s[i + 1] == '-') || (s[i + 1] == '+'))))
                return false;
        }

        return true;
    }
};