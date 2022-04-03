#include <iostream>
#include <list>
using namespace std;

float sumNumbers(float a, float b) {
    return a + b;
}

float sumNumbers(float a, float b, float c) {
    return a + b + c;
}

class User {
public:
    virtual void GetPermissions() {
        cout << "User can see limited info" << endl;
    }
};

class SuperUser : public User {
public:
    void GetPermissions() {
        cout << "Superuser can see all info" << endl;
    }
};

int main()
{
    cout << sumNumbers(1, 2) << endl;
    cout << sumNumbers(1, 2, 3) << endl;

    User u;
    SuperUser s;

    list<User*> users;

    users.push_back(&u);
    users.push_back(&s);

    for (auto u : users) {
        u->GetPermissions();
    }

    cin.get();
}
