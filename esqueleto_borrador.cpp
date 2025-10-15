#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

void agregarDinero(double &saldo);
void retirarDinero(double &saldo);

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Billetera Digital");
    window.setFramerateLimit(60);

    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        return -1;
    }

    sf::Text titulo("Billetera Digital", font, 50);
    titulo.setPosition(250, 50);

    sf::Text saldoTexto("Saldo: $100.00", font, 30);
    saldoTexto.setPosition(50, 150);
    
    sf::Text botonAgregarTexto("Agregar Dinero", font, 25);
    botonAgregarTexto.setPosition(50, 250);

    sf::Text botonRetirarTexto("Retirar Dinero", font, 25);
    botonRetirarTexto.setPosition(50, 300);

    double saldo = 100.00;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);
                if (botonAgregarTexto.getGlobalBounds().contains(mousePos)) {
                    agregarDinero(saldo);
                }
                if (botonRetirarTexto.getGlobalBounds().contains(mousePos)) {
                    retirarDinero(saldo);
                }
            }
        }
        
        std::stringstream stream;
        stream << std::fixed << std::setprecision(2) << saldo;
        saldoTexto.setString("Saldo: $" + stream.str());

        window.clear(sf::Color(20, 40, 80)); // Un color azul oscuro
        window.draw(titulo);
        window.draw(saldoTexto);
        window.draw(botonAgregarTexto);
        window.draw(botonRetirarTexto);
        window.display();
    }

    return 0;
}

void agregarDinero(double &saldo) {
    saldo += 50.00; // Lógica de ejemplo
    std::cout << "Se agregaron $50.00. Nuevo saldo: " << saldo << std::endl;
}

void retirarDinero(double &saldo) {
    if (saldo >= 20.00) {
        saldo -= 20.00; // Lógica de ejemplo
        std::cout << "Se retiraron $20.00. Nuevo saldo: " << saldo << std::endl;
    } else {
        std::cout << "Fondos insuficientes." << std::endl;
    }
}