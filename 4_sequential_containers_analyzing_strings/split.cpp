/*
*   i/p: Pranit Ekatpure
*   o/p: Pranit
*        Ekatpure
*/

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

vector<string> split(const string& s)
{
    vector<string> ret;

    typedef string::size_type string_size;
    string_size i = 0;

    while(i != s.size())
    {
        //ignore leading blanks
        while(i != s.size() && isspace(s[i]))
            ++i;
        
        //find end of next word
        string_size j = i;
        while(j != s.size() && !isspace(s[j]))
            ++j;

        if(i != j)
        {
            //copy from s starting at i and taking j - i chars
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }
    return ret;
}

int main()
{
    string s;
    //read and split each line of input
    while(getline(cin, s))
    {
        vector<string> v = split(s);

        //write each word in v
        for(vector<string>::size_type i = 0; i != v.size(); ++i)
            cout << v[i] << endl;
    }
    return 0;
}