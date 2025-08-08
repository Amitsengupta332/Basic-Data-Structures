#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class Compare
{
public:
    bool operator()(const Student &l, const Student &r) const
    {
        if (l.marks != r.marks)
            return l.marks < r.marks;
        return l.roll > r.roll;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, Compare> pq;
    int n;
    if (!(cin >> n))
        return 0;

    for (int i = 0; i < n; ++i)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    int q;
    cin >> q;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {

            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            if (pq.empty())
                cout << "Empty\n";
            else
            {
                auto t = pq.top();
                cout << t.name << " " << t.roll << " " << t.marks << "\n";
            }
        }
        else if (type == 1)
        {

            if (pq.empty())
                cout << "Empty\n";
            else
            {
                auto t = pq.top();
                cout << t.name << " " << t.roll << " " << t.marks << "\n";
            }
        }
        else if (type == 2)
        {

            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty\n";
                else
                {
                    auto t = pq.top();
                    cout << t.name << " " << t.roll << " " << t.marks << "\n";
                }
            }
        }
    }

    return 0;
}
