#include <iostream>
using namespace std;

double score;
int gpa;
int main()
{
    cin >> score;
    if (score > 100)
        cout << "Input Error!";
    if (score < 0)
        cout << "Input Error!";
    if (score <= 100 && score >= 85)
        gpa = 4;
    if (score < 85 && score >= 75)
        gpa = 3;
    if (score < 75 && score >= 60)
        gpa = 2;
    if (score < 60 && score >= 0)
        gpa = 0;
    switch (gpa)
    {
        case 4:
            cout << "4";
            break;
        case 3:
            cout << "3";
            break;
        case 2:
            cout << "2";
            break;
        case 0:
            cout << "0";
            break;
        default:
            cout << " ";
    }
    return 0;
}