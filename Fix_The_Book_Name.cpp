#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back

// PracticalStatisticsforDataScientists50EssentialConceptsUsingRandPythonbyPeterBruceAndrewBrucePeterGedeck.pdf

string change_The_Book_Name(string c) {
    vector<char> s;
    if (isupper(c[0])) {
        s.pb(c[0]);
    }
    for (int i = 1; i < c.length(); i++) {
        if (isupper(c[i])) {
            s.pb('_');
        }
        s.pb(c[i]);
    }
    string s1 = "";
    for (int i = 0; i < s.size(); i++) {
        s1 += s[i];
    }
    return s1;
}

int main() {
    string s;
    cin >> s;
    cout << change_The_Book_Name(s) << nl;
    return 0;
}
