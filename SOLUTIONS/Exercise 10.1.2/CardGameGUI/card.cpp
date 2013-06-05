#include "card.h"
#include <QStringList>

// conversion constructor
Card::Card(int faceNbr, int suitNbr)
    : m_FaceNbr(faceNbr), m_SuitNbr(suitNbr){}

QString Card::toString() const
{
//    return getFace() + " " + getSuit();
    return QString("%1 %2").arg(getFace()).arg(getSuit());
}

// returns value of card based on rules of bridge
int Card::getValue() const
{
    switch(m_FaceNbr) {
    case 0: return 1; // ace default
        break;
    case 1: return 2;
        break;
    case 2: return 3;
        break;
    case 3: return 4;
        break;
    case 4: return 5;
        break;
    case 5: return 6;
        break;
    case 6: return 7;
        break;
    case 7: return 8;
        break;
    case 8: return 9;
        break;
    default : return 10;
    }
}

QStringList Card::s_Faces = QStringList() << "A" << "2" << "3" << "4"
                                          << "5" << "6" << "7" << "8"
                                          << "9" << "T" << "J" << "Q"
                                          << "K";

QStringList Card::s_Suits = QStringList() << "Clubs" << "Diamonds"
                                          << "Hearts" << "Spades";

QString Card::getFace() const { return s_Faces[m_FaceNbr]; }
QString Card::getSuit() const { return s_Suits[m_SuitNbr]; }
