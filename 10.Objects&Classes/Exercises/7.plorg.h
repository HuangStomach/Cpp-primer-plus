class Plorg {
private:
    enum enums {
        LIMIT = 20
    };
    char name[LIMIT];
    int ci;
public:
    Plorg(const char * name = "Plorga", int ci = 50);
    void setCi(int ci);
    void show() const;
};