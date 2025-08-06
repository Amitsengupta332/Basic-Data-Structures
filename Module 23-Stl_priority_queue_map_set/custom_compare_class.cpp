#include <bits/stdc++.h>
using namespace std;

class students
{
public:
    string name;
    int roll;
    int marks;

    students(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(students l, students r)
    {
        // return l.marks > r.marks;
        if (l.marks > r.marks)
            return true;
        else if(l.marks < r.marks)
            return false;
        else
        {
            return l.roll > r.roll;
        }
    }
};

int main()
{
    priority_queue<students, vector<students>, cmp> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students obj(name, roll, marks);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}