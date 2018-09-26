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
        cout << "0은 가입,1은 로그인 2는 나가기" << endl;
        cin >> i;

        if (i == 0)
        {
            cout << "가입" << endl;
            cout << "id, password 입력" << endl;

            string name;
            string password;

            cin >> name;
            cin >> password;

            User u;

            u.name = name;
            u.password = password;

            //vector 넣기

            vector<User>users;
            users.push_back(u);

            cout << users.size() << endl;

        }
        else if (i == 1)
        {
            cout << "로그인" << endl;

        }
        else if (i == 2)
        {
            cout << "나가기" << endl;
            break;
        }

    }
    getchar();
    getchar();
    return 0;
}