//
// Created by maguire1815 on 21/09/2018.
//

#include <iostream>
#include <vector>
#include <string>
#include <type_traits>
#include <typeinfo>
using namespace std;

// �������� Ŭ���� ������ ���� �� �������� ����� �ش�.
// class diagram ǥ�� �� �ϳ�
// �������� ����ϸ�, ������ ������ �ܼ�ȭ ����.. �׷��� ���� ������ ����


class Animal{
public:
    string name;
    enum atypes {
        birds = 1,
        beast = 2,
        fish = 3
    };
    atypes type;

    string sex;
    int age;

    // ��ӹ��� �ڽ��� ���� �̸��� �Լ��� ��� ����
    virtual void Sound() { cout << "Animal" << endl; }
};

// class �ڽ� : public �θ�
class Eagle : public Animal {
public:
    virtual void Sound() override { cout << "Eagle" << endl; }
};

class Cat : public Animal {
public:
    virtual void Sound() override { cout << "Cat" << endl; }
};

int main()
{
    // container;

//    vector<Eagle> containerE;

    vector<Animal> animal;

    Eagle e;
    e.name = "������";
    e.type = Animal::atypes::birds;
    //e.type = 1;

//    if (e.type == 1)
    if (e.type == Animal::atypes::birds)
    {
        // ������
    }
    else if (e.type == Animal::atypes::beast)
    {
        // ��������
    }


    animal.push_back(e);
//    containerE.push_back(e);
    e.Sound();  // Eagle

    Cat c;
    c.name = "�����";
    animal.push_back(c);
//    containerE.push_back(c);
    c.Sound();  // Cat

    for (auto a : animal){
        //a.Sound();
        cout << a.name << endl;
        a.Sound(); // Animal
        // ?a.Sound(); // �ڽ��� Sound()�Լ��� ȣ��
        // ���� : å���� �˾ƿ���
    }

    return 0;
}




