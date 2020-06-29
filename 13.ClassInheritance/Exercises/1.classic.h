class Cd {
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};

class Classic: public Cd {
private:
    char major[200];
public:
    Classic(char * s1, char * s2, char * s3, int n, double x);
    Classic(const Classic & d);
    Classic();
    virtual ~Classic();
    void Report() const;
    Classic & operator=(const Classic & d);
};