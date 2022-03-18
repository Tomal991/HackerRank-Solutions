#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong

    int Lower_case = 0;
    int Upper_case = 0;
    int number = 0;
    int special_case = 0;
    
    int len = password.length();
    int i;
    for(i = 0; i<n; i++)
    {
        if(password[i] >= 'a' && password[i] <= 'z')
            Lower_case++;
        else if(password[i] >= 'A' && password[i] <= 'Z')
            Upper_case++;
        else if(password[i] >= '0' && password[i] <= '9')
            number++;
        else
            special_case++;
    }
    
    int add = 0;
    if(Lower_case == 0)
        add++;
    if(Upper_case == 0)
        add++;
    if(number == 0)
        add++;
    if(special_case == 0)
        add++;
    
    len = len + add;
    
    if(len < 6)
        add = add + 6 - len;
    
    return add;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
