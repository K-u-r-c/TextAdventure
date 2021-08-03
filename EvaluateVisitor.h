#pragma once

#include "Visitor.h"
#include "Player.h"
#include "Option.h"

class EvaluateVisitor : public Visitor {
private:
    Player& m_player;

public:
    EvaluateVisitor(Player& player) : m_player { player } {}

    virtual void OnVisit(Visitable& visitable) {
        Option* pOption = dynamic_cast<Option*>(&visitable);

        if(pOption != nullptr) {
            pOption->Evaluate(m_player);
        }
    }
};