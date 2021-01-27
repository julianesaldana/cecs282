#include <string>
using namespace std;

class Can {
private:
    string contents;
    int volume;
public:
    Can();
    Can(string, int);
    void display();
};