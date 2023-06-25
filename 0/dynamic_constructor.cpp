#include <iostream>
using namespace std;
class BankDeposite
{
private:
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite() {}
    BankDeposite(int p, int y, float r);
    BankDeposite(int p, int y, int r);
    void show();
};
BankDeposite::BankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposite::BankDeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void BankDeposite::show()
{
    cout << "Principal rupees was: " << principal << "\nReturn value after " << years << " years is :" << returnValue << endl;
}
int main()
{
    BankDeposite b1, b2, b3;
    int p, y;
    float rate_decimal;
    int percent_rate;

    cout << "Enter the value of principal , year, interest (in decimal(eg. 0.04)):" << endl;
    cin >> p >> y >> rate_decimal;
    b1 = BankDeposite(p, y, rate_decimal);
    b1.show();

    cout << "\n\n-------------------------\n\n";

    cout << "Enter the value of rate of interest (in percentage(eg. 4)):" << endl;
    cin >> percent_rate;
    b2 = BankDeposite(p, y, percent_rate);
    b2.show();
    return 0;
}