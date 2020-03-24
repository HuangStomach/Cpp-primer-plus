#include <string>

class Account {
private:
    std::string name;
    std::string num;
    double amount;
public:
    Account(const std::string name, const std::string num, double amount = 0.0);
    void input(double income);
    void ouput(double outcome);
    void show();
};