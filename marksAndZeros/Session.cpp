#include "Session.h"
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

void chooseSign(Player* player) {
    std::cout << R"(Enter "x" to choose marks of "o" to choose zeros: )";
    char sign;
    bool undefined = true;
    while (undefined) {
        std::cin >> sign;
        if (sign == 'x' || sign == 'o') {
            undefined = false;
        }
    }

    player -> sign = sign;
}

void Session::start() {
    Player* first;
    Player* second;

    printHelp();

    int firstOption = defineType();
    int secondOption = defineType();

    switch (firstOption) {
        case 1:
            first = new HumanPlayer();
            chooseSign(first);
            break;
        case 2:
            first = new StupidAI(&ctx.model);
            break;
        case 3:
            first = new KillingAI(&ctx.model);
            break;
        default:
            return;
    }

    switch (secondOption) {
        case 1:
            second = new HumanPlayer();
            if (firstOption != 1) {
                chooseSign(second);
            }
            break;
        case 2:
            second = new StupidAI(&ctx.model);
            break;
        case 3:
            second= new KillingAI(&ctx.model);
            break;
        default:
            return;
    }
    second -> sign = (first -> sign == 'x' ? 'o' : 'x');

    Player* curPlayer = (first -> sign == 'x' ? first : second);
    while (!ctx.model.isGameEnded()) {
        std::cout << "The move of " << curPlayer -> sign << ": " << std::endl;
        std::pair <int, int> curMove = curPlayer -> doMove();

        if (!ctx.controller.updateRequest(curMove, &ctx.model, curPlayer -> sign)) {
            continue;
        }

        curPlayer = (curPlayer == first ? second : first);

        ctx.viewer.display(ctx.model);
    }

    switch (ctx.model.getState()) {
        case X_WINS:
            std::cout << "Marks wins!" << std::endl;
            break;
        case O_WINS:
            std::cout << "Zeros wins!" << std::endl;
            break;
        case DRAW:
            std::cout << "It's a draw!" << std::endl;
        default:
            return;
    }
}