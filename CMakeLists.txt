cmake_minimum_required(VERSION 3.20)
project(Proyecto_1_Breakout)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto_1_Breakout main.cpp source/Game.cpp source/Game.h objects/Ball.cpp objects/Ball.h objects/Bar.cpp objects/Bar.h objects/Block.cpp objects/Block.h factory/BlockFactory.h factory/CommonBlockFactory.cpp factory/CommonBlockFactory.h factory/DoubleBlockFactory.cpp factory/DoubleBlockFactory.h factory/TripleBlockFactory.cpp factory/TripleBlockFactory.h factory/DeepBlockFactory.cpp factory/DeepBlockFactory.h factory/InnerBlockFactory.cpp factory/InnerBlockFactory.h factory/SurpriseBlockFactory.cpp factory/SurpriseBlockFactory.h)
