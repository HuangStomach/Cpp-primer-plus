class Golf {
private:
    const static int Len = 40;
    char fullname[Len];
    int handicap;
public:
    Golf();
    Golf(const char * name, int hc);
    void setHandicap(int hc);
    void show() const;
};
