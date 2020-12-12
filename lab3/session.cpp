#include "Session.h"

#include <memory>
#include "HumanPlayer.h"
#include "StupidAI.h"
#include "KillingAI.h"

void Session::printHelp() {
    std::cout << "You can choose players from 3 types:" << std::endl;
    std::cout << "Human" << std::endl;
    std::cout << "AI" << std::endl;
    std::cout << "Killing AI"<< std::endl;
    std::cout << "You can choose them as:" << std::endl;
    std::cout << "1.Human" << std::endl;
    std::cout << "2.AI" << std::endl;
    std::cout << "3.Killing AI" << std::endl;
    std::cout << "Just enter the number of player type"  << std::endl;
}

int defineType() {
    bool undefined = true;
    int type;

    while (undefined) {
        std::cout << "Enter the type of player: ";
        std::cin >> type;
        if (type > 3 || type < 1) {
            std::cout << "Wrong type!" << std::endl;
            continue;
        }

        undefined = false;
    }

    return type;
}

void Session::start() {
    std::unique_ptr<Player> first;
    std::unique_ptr<Player> second;

    printHelp();

    int firstOption = defineType();
    int secondOption = defineType();

    switch (firstOption) {
        case 1:
            first = std::make_unique<HumanPlayer>();
            break;
        case 2:
            first = std::make_unique<StupidAI>(&ctx.model);
            break;
        case 3:
            first = std::make_unique<KillingAI>(&ctx.model);
            break;
        default:
            return;
    }

    switch (secondOption) {
        case 1:
            second = std::make_unique<HumanPlayer>();
            break;
        case 2:
            second = std::make_unique<StupidAI>(&ctx.model);
            break;
        case 3:
            second = std::make_unique<KillingAI>(&ctx.model);
            break;
        default:
            return;
    }

    ctx.model.addObserver(ctx.viewer);
    while (!ctx.model.isGameEnded()) {
        std::pair <int, int> move;
        std::cout << "Now the move of " << (ctx.model.getSign() == MARKS ? 'x' : 'o') << std::endl;

        if (ctx.model.getSign() == MARKS) {
            if (firstOption == 1) {
                std::cout << "Enter your move as <line> <column>: ";
            }
            move = first -> doMove();
        } else {
            if (secondOption == 1) {
                std::cout << "Enter your move as <line> <column>: ";
            }
            move = second -> doMove();
        }

        ctx.controller.updateRequest(move, &ctx.model);
    }
}
