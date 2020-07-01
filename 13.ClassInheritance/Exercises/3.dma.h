#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class ABC {
private:
    char * label;
    int rating;
public:
    ABC(const char * l = "null", int r = 0);
    ABC(const ABC & rs);
    ABC & operator=(const ABC & rs);
    friend std::ostream & operator<<(std::ostream & os, const ABC & rs);
    virtual ~ABC();
    virtual void View() const = 0;
};

class baseDMA: public ABC {
public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    void View() const;
};

class lacksDMA: public ABC {
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
    lacksDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
    void View() const;
};

class hasDMA: public ABC {
private:
    char * style;
public:
    hasDMA(const char * c = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const baseDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & hs);
    void View() const;
};

#endif