//
// Created by eduardo on 14/9/21.
//

#include "Game.h"

Game::Game() {
    this->window = nullptr;
    initWindow();
}

Game::~Game() {
    delete this->window;
}

void Game::initWindow() {
    this->videoMode.height = 600;
    this->videoMode.width = 800;
    this->window = new RenderWindow(this->videoMode, "Crazy Breakout", Style::Titlebar | Style::Close);
}

void Game::update() {
    while (this->window->pollEvent(this->ev)) {
        if (this->ev.type == Event::Closed) {
            this->window->close();
            break;
        }
    }
}

void Game::render() {
    this->window->clear(Color::Blue);
    this->window->display();
}

bool Game::isRunning() {
    return this->window->isOpen();
}