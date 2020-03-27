#include "4.sales.h"
#include <iostream>

namespace SALES {
    Sales::Sales(const double ar[], int n) {
        double sum = 0.0;
        for (int i = 0; i < QUARTERS; i++) {
            this->sales[i] = i < n ? ar[i] : 0.0;
            sum += this->sales[i];
            if (i >= n) continue;
            if (this->sales[i] > this->max) this->max = this->sales[i];
            if (this->sales[i] < this->min || i == 0) this->min = this->sales[i];
        }
        this->average = sum / n;
    }

    Sales::Sales() {
        using std::cout;
        using std::cin;
        using std::endl;

        double sum = 0.0;
        for (int i = 0; i < QUARTERS; i++) {
            cout << "请输入第" << i << "个销售额: ";
            cin >> this->sales[i];
            sum += this->sales[i];
            if (this->sales[i] > this->max) this->max = this->sales[i];
            if (this->sales[i] < this->min || i == 0) this->min = this->sales[i];
        }
        this->average = sum / QUARTERS;
    }

    void Sales::show() const {
        using std::cout;
        using std::endl;

        cout << "List: ";
        for (int i = 0; i < QUARTERS; i++) {
            cout << this->sales[i] << " ";
        }
        cout << endl;
        cout << "average: " << this->average << endl;
        cout << "max: " << this->max << endl;
        cout << "min: " << this->min << endl;
    }
}
