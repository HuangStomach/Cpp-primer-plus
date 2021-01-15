#include <iostream>
#include <string>
#include <memory>

class Report {
private:
    std::string str;
public:
    Report(const std::string s): str(s) {
        std::cout << "created!\n";
    }
    ~Report() {
        std::cout << "deleted!\n";
    }
    void comment() const { 
        std::cout << str << "\n"; 
    }
};

int main(int argc, char const *argv[]) {
    {
        std::shared_ptr<Report> ps(new Report("using shared_ptr"));
        ps->comment();
    }
    {
        std::unique_ptr<Report> ps(new Report("using unique_ptr"));
        ps->comment();
    }
    return 0;
}
