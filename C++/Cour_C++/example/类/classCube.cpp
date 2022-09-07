#include <iostream>
using namespace std;

class Cube {

    // behavior
public:
    void setL(int l)
    {
        m_L = l;
    }

    int getL()
    {
        return m_L;
    }
    void setW(int w)
    {
        m_W = w;
    }

    int getW()
    {
        return m_W;
    }
    void setH(int h)
    {
        m_H = h;
    }

    int getH()
    {
        return m_H;
    }

    int calculateS()
    {
        return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
    }
    int calculateV()
    {
        return m_L * m_W * m_H;
    }

    // Attribute
private:
    int m_L;
    int m_W;
    int m_H;
};

bool isSame(Cube& cl, Cube& c2)
{

    if (cl.getL() == c2.getL() && cl.getH() == c2.getH() && cl.getW() == c2.getW()) {
        return true;
    } else {
        return false;
    }
}

int main(int argc, char* argv[])
{

    Cube cl;
    cl.setL(10);
    cl.setW(10);
    cl.setH(10);

    cout << "S: " << cl.calculateS() << endl;
    cout << "V: " << cl.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    bool ret = isSame(cl, c2);

    return 0;
}
