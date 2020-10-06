#include <stdexcept>
#include <string>

using namespace std;

class Sales {
public:
    enum {MONTHS = 12};
    class bad_index: public logic_error {
    private:
        int bi;
    public:
        explicit bad_index(int ix, const string & s = "Index error\n");
        int bi_val() const { return bi; }
        virtual ~bad_index() throw() {}
    };
    explicit Sales(int yy = 0);
    Sales(int yy, const double * gr, int n);
    virtual ~Sales() {}
    int Year() const { return year; }
    virtual double operator[](int i) const;
    virtual double & operator[](int i);
private:
    double gross[MONTHS];
    int year;
};

class LabeledSales: public Sales {
public:
    class nbad_index: public Sales::bad_index {
    private:
        string lbl;
    public:
        nbad_index(const string lb, int ix, const string & s = "Index error");
        const string & label_val() const { return lbl; }
        virtual ~nbad_index() throw() { }
    };
    explicit LabeledSales(const string & lb = "none", int yy = 0);
    LabeledSales(const string & lb, int yy, const double * gr, int n);
    virtual ~LabeledSales() {}
    const string & Label() const { return label; }
    virtual double operator[](int i) const;
    virtual double & operator[](int i);
private:
    string label;
};
