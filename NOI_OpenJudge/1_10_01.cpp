#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int n, k;

struct Student{
    string number;
    double score;
} student[110];

bool cmp(Student a,Student b){
    return a.score > b.score;
}

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> student[i].number>>student[i].score;
    }

    sort(student, student + n, cmp);

    cout << student[k-1].number << " " << student[k-1].score;
    return 0;
}