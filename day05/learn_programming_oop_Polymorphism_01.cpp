//
// Created by maguire1815 on 21/09/2018.
//

#include <iostream>
#include <vector>
#include <string>
#include <type_traits>
#include <typeinfo>
using namespace std;

// 다형성은 클래스 구조를 조금 더 논리적으로 만들어 준다.
// class diagram 표현 중 하나
// 다형성을 사용하면, 복잡한 문제를 단순화 가능.. 그런데 강한 결합이 생김


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

    // 상속받은 자식이 같은 이름의 함수를 사용 가능
    virtual void Sound() { cout << "Animal" << endl; }
};

// class 자식 : public 부모
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
    e.name = "독수리";
    e.type = Animal::atypes::birds;
    //e.type = 1;

//    if (e.type == 1)
    if (e.type == Animal::atypes::birds)
    {
        // 독수리
    }
    else if (e.type == Animal::atypes::beast)
    {
        // 육지동물
    }


    animal.push_back(e);
//    containerE.push_back(e);
    e.Sound();  // Eagle

    Cat c;
    c.name = "고양이";
    animal.push_back(c);
//    containerE.push_back(c);
    c.Sound();  // Cat

    for (auto a : animal){
        //a.Sound();
        cout << a.name << endl;
        a.Sound(); // Animal
        // ?a.Sound(); // 자식의 Sound()함수를 호출
        // 숙제 : 책보고 알아오기
    }

    return 0;
}




