#pragma once
#include "Model.h"
#include "View.h"
#include "Controller.h"
#include <iostream>

struct Context {
    Model model;
    Viewer viewer;
    Controller controller;
};