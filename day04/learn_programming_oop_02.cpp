#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

class User
{
public:
    string name;
    string password;
};

int main()
{
    int i;

    while (true)
    {
        cout << "0�� ����,1�� �α��� 2�� ������" << endl;
        cin >> i;

        if (i == 0)
        {
            cout << "����" << endl;
            cout << "id, password �Է�" << endl;

            string name;
            string password;

            cin >> name;
            cin >> password;

            User u;

            u.name = name;
            u.password = password;

            //vector �ֱ�

            vector<User>users;
            users.push_back(u);

            cout << users.size() << endl;

        }
        else if (i == 1)
        {
            cout << "�α���" << endl;

        }
        else if (i == 2)
        {
            cout << "������" << endl;
            break;
        }

    }
    getchar();
    getchar();
    return 0;
}