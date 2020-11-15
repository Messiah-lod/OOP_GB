#include "Deck.h"



Deck::Deck()
{
//	Populate();
}

void Deck::Populate()
{
	for (size_t i = Card::bubi; i <= Card::piki; i++)
	{
		for (size_t j = Card::two; j <= Card::A; j++)
			Add(new Card(static_cast<Card::value>(j), static_cast<Card::suit>(i)) );
	}
}

void Deck::Shuffle()
{
	srand(time(NULL));
	std::random_shuffle(cards.begin(), cards.end());
}

void Deck::Deal(Hand& aHand)
{
	Card tmp;
	if (cards.size() > 0) {
		aHand.Add(cards.back());
		tmp = *cards.back();
		cards.pop_back();
	}
	else std::cout << "The deck of cards is over" << std::endl;
}

void Deck::AddltionalCards(GenericPlayer& aGenerlcPlayer)
{
	while (aGenerlcPlayer.IsHitting() && !aGenerlcPlayer.IsBoosted())
	{
		if (cards.size() > 0) std::cout << "[" << *cards.back() << "]" << std::endl;
		Deal(aGenerlcPlayer);
	}
}


Deck::~Deck()
{
}
