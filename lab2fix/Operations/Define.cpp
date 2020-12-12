#include "Define.h"
#include "../Factory/OperationMaker.h"

REGISTER_OPERATION(Define, DEFINE);

void Define::execute(std::list<std::string> &args, Context &ctx) const {
    if (args.size() < 2) {
        throw WrongInput();
    }

    std::string id = args.front();
    std::string numberToDefine = args.back();
    auto wrongId = [id]() -> bool {
        for (char i : id) {
            if (isdigit(i)) {
                return false;
            }
        }

        return true;
    }();

    auto wrongNumber = [id]() -> bool {
        for (char i : id) {
            if (!isdigit(i)) {
                return false;
            }
        }

        return true;
    }();

    if (wrongId) {
        throw IdentifyerFormat();
    }

    if (wrongNumber) {
        throw NumberFormat();
    }

    ctx.defines[id] = atof(numberToDefine.c_str());
}
