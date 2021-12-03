#include <iostream>
using namespace std;

double score;

int main()
{
    cin >> score;
    if (score > 100)
        cout << "Input Error!";
    if (score < 0)
        cout << "Input Error!";
    if (score <=100&&score>=85)
        cout << "4";
    if (score <85&&score>=75)
        cout << "3";
    if (score <75&&score>=60)
        cout << "2";
    if (score <60&&score>=0)
        cout << "0";
    return 0;
}