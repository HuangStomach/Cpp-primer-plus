#include "4.sales.h"
#include <iostream>

namespace SALES {
    void setSales(Sales & s, const double ar[], int n) {
        double sum = 0.0;
        for (int i = 0; i < QUARTERS; i++) {
            s.sales[i] = i < n ? ar[i] : 0.0;
            sum += s.sales[i];
            if (i >= n) continue;
            if (s.sales[i] > s.max) s.max = s.sales[i];
            if (s.sales[i] < s.min || i == 0) s.min = s.sales[i];
        }
        s.average = sum / n;
    }

    void setSales(Sales & s) {
        using std::cout;
        using std::cin;
        using std::endl;


        double sum = 0.0;
        for (int i = 0; i < QUARTERS; i++) {
            cout << "请输入第" << i << "个销售额: ";
            cin >> s.sales[i];
            sum += s.sales[i];
            if (s.sales[i] > s.max) s.max = s.sales[i];
            if (s.sales[i] < s.min || i == 0) s.min = s.sales[i];
        }
        s.average = sum / QUARTERS;
    }

    void showSales(const Sales & s) {
        using std::cout;
        using std::endl;

        cout << "List: ";
        for (int i = 0; i < QUARTERS; i++) {
            cout << s.sales[i] << " ";
        }
        cout << endl;
        cout << "average: " << s.average << endl;
        cout << "max: " << s.max << endl;
        cout << "min: " << s.min << endl;
    }
}
