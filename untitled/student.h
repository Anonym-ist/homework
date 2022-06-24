#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <map>
#include <string>

using namespace std;


class Student
{
public:
    void emplace(int id, string name)
    {
        if (stu.find(id) == stu.end())
        {
            stu.insert({id,name});
            //throw new exception;

        }
        else
        {
            //throw new exception;
        }
    }
    string query(int id)
    {
        if (stu.find(id) == stu.end())
        {
            //throw new exception;
            return "nobody";
        }
        else
        {
            //throw new exception;
            return stu[id];

        }
    }
    bool erase(int id)
    {
        if (stu.find(id) == stu.end())
        {
            //throw new exception;
            return false;
        }
        else
        {
            stu.erase(stu.find(id));
            //throw new exception;
            return true;
        }
    }

private:
    map<int, string>stu;
}ss;

#endif // STUDENT_H
