#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <random>

class Card {
public:
    enum Suit { HEARTS, DIAMONDS, CLUBS, SPADES };
    enum Rank { TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };

    Card(Suit s, Rank r);

    Suit getSuit();
    Rank getRank();

    friend std::ostream& operator<<(std::ostream& os, const Card& card);

private:
    Suit suit;
    Rank rank;
};

#endif // CARD_H
