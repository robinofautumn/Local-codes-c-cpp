#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int x)
    {
        roll_no = x;
    }
    void print_number()
    {
        cout << "The roll number is: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your marks is: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "The score is: " << score << endl;
    }
};

class Result: public Test, public Sports
{
    private:
        float total;
    public:
        void display()
        {
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"The total is : "<<total<<endl;
        }
};

int main()
{   
    Result s;
    s.set_number(215);
    // s.print_number();
    s.set_marks(90.45, 98.1);
    s.set_score(6);
    s.display();
    return 0;
}