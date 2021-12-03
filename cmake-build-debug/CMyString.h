struct Node {
    int _Num;
    double _Korean, _Math, _Social, _English, _Jaryogoojo, _Cpp;
    Node* Left;
    Node* Right;
};

void line();
void Input(Node* N);

class CMyString
{
protected:

    Node* Head{};
    Node* Tail{};
    int _Grade{};
    int _Class{};

public:

    CMyString();
    CMyString(int a, int b);

    void Menu();
    void Insert();
    void Delete();

    virtual void Unlock();

    void Print() const;
    void Print_Class() const;
    bool Search(Node* rn) const;

};

class CMyStringEx :public CMyString {
private:
    int length;
    double Class_Average[7];
public:
    CMyStringEx(int a, int b);

    void GetInfo();

    void Menu();
    void Insert();
    void Delete();

    virtual void Unlock() override;
};