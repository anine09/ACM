#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    int s, v;
    cin >> s >> v;
    int diff_trash = 10;
    double walk_time;
    double the_time;
    int arrive_time = 4800;//8 o'clock in minute.
    walk_time = s / v + diff_trash;
    int hour, minute;

    if(arrive_time - walk_time >= 0){
        the_time = arrive_time - walk_time;
        hour = the_time / 60.0;
        minute = int(the_time) % 60;
        if(hour<10&&minute<10){
            cout << "0" << hour << ":"<< "0" << minute;
        }
        else if(hour<10&&minute>=10){
            cout << "0" << hour << ":" << minute;
        }
        else if(hour>=10&&minute<10){
            cout << hour << ":"<< "0" << minute;
        }
        else{
            cout << hour << ":" << minute;
        }
    }
    return 0;

}




/*
int main(){
    int s, v;
    cin >> s >> v;
    int arrive_time = 4800; //8 o'clock in minute;
    int trash_diff = 10;
    double walk_time;
     double the_time; //answer
    int hour, minute;

    walk_time = (s / v)+trash_diff;
    if(arrive_time - walk_time >= 0){
        the_time = arrive_time - walk_time;
        hour = the_time / 60.0;
        minute = the_time % 60.0;
        if(hour<10&&minute<10){
            cout << "0" << hour << ":"<< "0" << minute;
        }
        else if(hour<10&&minute>=10){
            cout << "0" << hour << ":" << minute;
        }
        else if(hour>=10&&minute<10){
            cout << hour << ":"<< "0" << minute;
        }
        else{
            cout << hour << ":" << minute;
        }
    }
    return 0;
}
*/