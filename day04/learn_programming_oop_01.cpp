//
// Created by maguire1815 on 21/09/2018.
//

#include <iostream>
#include <vector>       //
#include "User.cpp"

using namespace std;


/*
 * class basic
 * class vs obejct
 * oop?
 * information hiding
 * encapsulation
 * constructor & destructor
 * class & array & this point
 * copy constructor
 */


// login system
// sign up  // ȸ������
// sign in  // �α���

// console program �����

int main()
{
    // vector�� array�� ���
    vector<User> users;

    while(true) {
        cout << "0 : login, 1 : sign up, 2: exit" << endl;
        int in;
        cin >> in;
        if (in == 0) {
            cout << "login" << endl;
            if (users.empty()) {    // ȸ�������� user�� ���� ��
                cout << "no user" << endl;
            }
            else {
                cout << "input user id and password" << endl;
                string id;
                string password;
                cin >> id;
                cin >> password;

                // ranged-for
                for (User u : users) {
                    if (u.id == id && u.password == password) {
                        cout << "find user" << endl;
                        break;
                    }
                }
                cout << "there is no user u wanna" << endl;

            }

        } else if (in == 1) {
            cout << "sign up" << endl;
            User u;
            cout << "input id" << endl;
            string id;
            cin >> id;
            u.id = id;
            cout << "input password" << endl;
            string password;
            cin >> password;
            u.password = password;
            cout << u.id << endl;
            cout << u.password << endl;
            users.push_back(u);
        } else if (in == 2) {
            cout << "exit" << endl;
            break;
        }
    }
}










