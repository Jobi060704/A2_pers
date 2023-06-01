#ifndef MAST_H
#define MAST_H 


class Mast {
public:
    Mast();
    Mast(Mast &other);
    ~Mast();
    
    int getLength();
    void setLength(int length);

private:
    int length;
};

#endif // MAST_H
