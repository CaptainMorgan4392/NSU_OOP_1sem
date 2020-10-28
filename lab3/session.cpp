#include "session.h"
#include "ForbiddenMove.h"

void Session::startSession() {
    model.fillTable();

    player.chooseSign();
    botPlayer.sign = (player.sign == 'x' ? 'o' : 'x');

    while (!model.isEndOfGame()) {
        CurrentMove currentMove = player.doMove();
        try {
            if (!controller.checkMove(currentMove, model)) {
                throw ForbiddenMoveException();
            }
        } catch (ForbiddenMoveException& ex) {
            std::cout << ex.what() << std::endl;
            continue;
        }

        model.update(currentMove, player.sign);
        if (model.isEndOfGame()) {
            return;
        }

        CurrentMove moveOfBot = botPlayer.doMove(model);
        model.update(moveOfBot, botPlayer.sign);

        viewer.display(model);
    }
}
