/**
 * Consider a home theater system. To watch a movie, you might need to turn on the TV, set the correct input, turn on the sound system, and adjust the lights. Instead of having to perform each of these steps individually, you could have a single "Watch Movie" button that handles all these tasks for you. This "Watch Movie" button acts as a facade, simplifying the interaction with the complex system of devices.
 */

#include <iostream>
#include <memory>

using namespace std;

// Subsystem 1: TV
class TV {
public:
    void on() {
        std::cout << "TV is On." << std::endl;
    }
    void off() {
        std::cout << "TV is Off." << std::endl;
    }
};

// Subsystem 2: DVD Player
class DVDPlayer {
public:
    void on() {
        std::cout << "DVD Player is On." << std::endl;
    }
    void off() {
        std::cout << "DVD Player is Off." << std::endl;
    }
    void play() {
        std::cout << "DVD Player is playing movie." << std::endl;
    }
};

// Subsystem 3: Sound System
class SoundSystem {
public:
    void on() {
        std::cout << "Sound System is On." << std::endl;
    }
    void off() {
        std::cout << "Sound System is Off." << std::endl;
    }
    void setVolume(int volume) {
        std::cout << "Sound System volume set to " << volume << "." << std::endl;
    }
};

// Facade
class HomeTheaterFacade {
private:
    unique_ptr<TV> tv;
    unique_ptr<DVDPlayer> dvdPlayer;
    unique_ptr<SoundSystem> soundSystem;

public:
    HomeTheaterFacade(unique_ptr<TV> t, unique_ptr<DVDPlayer> d, unique_ptr<SoundSystem> s)
        : tv(move(t)), dvdPlayer(move(d)), soundSystem(move(s))) {}

    void watchMovie() {
        std::cout << "Get ready to watch a movie..." << std::endl;
        tv->on();
        dvdPlayer->on();
        dvdPlayer->play();
        soundSystem->on();
        soundSystem->setVolume(10);
    }

    void endMovie() {
        std::cout << "Shutting down the home theater..." << std::endl;
        dvdPlayer->off();
        tv->off();
        soundSystem->off();
    }
};

int main() {
    // Creating subsystem objects with unique pointers
    auto tv = make_unique<TV>();
    auto dvdPlayer = make_unique<DVDPlayer>();
    auto soundSystem = make_unique<SoundSystem>();

    // Creating facade object
    HomeTheaterFacade homeTheater(move(tv), move(dvdPlayer), move(soundSystem));

    // Using facade to simplify the process
    homeTheater.watchMovie();
    homeTheater.endMovie();

    return 0;
}
