#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<string> shaunLanguages = {"English", "Hindi", "Marathi", "German", "French", "Malyalam"};
    vector<string> userLanguages;

    string username;
    cout << "Enter your name: ";
    getline(cin, username);

    int numLanguages;
    cout << "Enter the number of languages you know: ";
    cin >> numLanguages;
    cin.ignore(); 

    cout << "Enter the languages you know, one per line:" << endl;
    for (int i = 0; i < numLanguages; ++i) {
        string language;
        getline(cin, language);
        userLanguages.push_back(language);
    }

    unordered_set<string> languageSet(shaunLanguages.begin(), shaunLanguages.end());
    cout << endl;

    for (const auto& language : userLanguages) {
        if (languageSet.count(language) > 0) {
            cout << "Both Shaun and " << username << " can communicate in " << language << endl;
        }
    }

    return 0;
}