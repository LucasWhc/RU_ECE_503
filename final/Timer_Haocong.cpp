//
// Created by Lucas on 11/22/2019.
//

#include "Timer_Haocong.h"

Timer::Timer() {}

Timer::~Timer() {}

//Get date and time for transaction part
string Timer::getDate() const {
    string date;
    const time_t t = time(NULL);
    tm* now = localtime(&t);
    string year = Converter(now->tm_year + 1900), mon = Converter(now->tm_mon + 1), day = Converter(now->tm_mday);
    date = year + "/" + mon + "/" + day;
    return date;
}

string Timer::getTime() const {
    string timer;
    const time_t t = time(NULL);
    tm* now = localtime(&t);
    string hour = Converter(now->tm_hour), min = Converter(now->tm_min), sec = Converter(now->tm_sec);
    timer = hour + ":" + min + ":" + sec;
    return timer;
}

//Convert int to string
string Timer::Converter(int val) const {
    string res;
    if (val >= 0 && val < 10) res = "0" + to_string(val);
    else res = to_string(val);
    return res;
}