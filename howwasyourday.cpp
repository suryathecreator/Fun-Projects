#include <iostream>
using namespace std;

int main() {

    string name;

    cout << "Hello! What may I call you? (only first name no spaces)" << endl;
    cin >> name;

    cout << "Nice to meet you, " <<  name << "!" << endl;
    cout << "Did your day go well or not? (enter 'good' or 'bad')" << endl;

     
    string yes = "yes";
    string no = "no";
    string good = "good";
    string bad = "bad";
    string rant;
    string rant2;
    string answer;
    cin >> answer;
    if (good.compare(answer) == 0)  {

    cout << "Woohoo! Great! Would you like to talk about it? (enter 'yes' or 'no')" << endl;
   cin >> answer;
    if (yes.compare(answer) == 0) {
        cout << "Cool, rant as much as you want, I promise to be a good listener!" << endl;
        cin >> rant;
       }  else {
           cout << "Well, that's completely fine! Have a great rest of your day!" << endl;

        }
    
    } else {
// if bad
        cout << "Aww, sorry about that! Want to talk about it? (enter 'yes or 'no')" << endl;
        cin >> answer;
        if (yes.compare(answer) == 0) {
            cout << "Cool, rant as much as you want, I promise to be a good listener!" << endl;
            cin >> rant2;

        }
        else {
            cout << "Well, I hope you feel better then! See you around!" << endl;

        }

    }

    return 0;
}
