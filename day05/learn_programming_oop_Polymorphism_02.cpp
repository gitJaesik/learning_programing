//
// Created by maguire1815 on 21/09/2018.
//


#include <iostream>
using namespace std;

/*
### ��Ÿũ����Ʈ ������ �Ѵٰ� ����.
### �Ʒ��� Ŭ������ ���弼��.
- scv
- ����
- ���̾
- �޵�
*/

class CObject
{
public :
    int hp;
    int shield;
    int sight;

    bool IsAlive() {
        if (hp > 0) return true;
        else return false;
    }
};

class CMoveObject
{
public:
    int speed;
    int blockedUntil;
};

class CAttackObject
{
public:
    int damage;
    int range;
    int attackSpeed;
    bool isAttackAir;
};

class CStimedUnit
{
public:
    virtual bool isStimPossible() {
    }
};

class CScv : public CObject, public CMoveObject, public CAttackObject
{
public :
    int isBuild() {}
};

class CMarine : public CObject, public CMoveObject, public CAttackObject, public CStimedUnit
{
public :
};

class CFirebet : public CObject, public CMoveObject, public CAttackObject, public CStimedUnit
{
public :
};

class CMedic : public CObject, public CMoveObject
{
public :
    virtual magic() {}
};

int main()
{
    return 0;
}