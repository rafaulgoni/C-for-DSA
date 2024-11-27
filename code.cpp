#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    string name;
    char section;
    int marks;
};

int main() {
    int T; 
    cin >> T;

    while (T--) {
        Student students[3];

        for (int i = 0; i < 3; i++) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].marks;
        }

        Student* best = &students[0];
        for (int i = 1; i < 3; i++) {
            if (students[i].marks > best->marks || 
               (students[i].marks == best->marks && students[i].id < best->id)) {
                best = &students[i]; 
            }
        }
        cout << best->id << " " << best->name << " " << best->section << " " << best->marks << endl;
    }

    return 0;
}
