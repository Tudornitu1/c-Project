#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

class EventLocation {
private:
    int maxSeats;
    int numZones;
    int seatsPerZone;

public:
    EventLocation(int maxSeats, int numZones, int seatsPerZone) {
        this->maxSeats = maxSeats;
        this->numZones = numZones;
        this->seatsPerZone = seatsPerZone;
    }

    int GetMaxSeats() const {
        return maxSeats;
    }

    int GetNumZones() const {
        return numZones;
    }

    int GetSeatsPerZone() const {
        return seatsPerZone;
    }
};

class Event {
private:
    std::string name;
    std::string date;
    std::string time;

public:
    Event(const std::string& name, const std::string& date, const std::string& time) {
        this->name = name;
        this->date = date;
        this->time = time;
    }

    const std::string& GetName() const {
        return name;
    }

    const std::string& GetDate() const {
        return date;
    }

    const std::string& GetTime() const {
        return time;
    }
};

int main() {
    // Read event location characteristics
    int maxSeats, numZones, seatsPerZone;
    std::cout << "Enter max seats: ";
    std::cin >> maxSeats;
    std::cout << "Enter number of zones: ";
    std::cin >> numZones;
    std::cout << "Enter seats per zone: ";
    std::cin >> seatsPerZone;

    EventLocation eventLocation(maxSeats, numZones, seatsPerZone);

    // Read event characteristics
    std::string eventName, eventDate, eventTime;
    std::cout << "Enter event name: ";
    std::cin.ignore();
    std::getline(std::cin, eventName);
    std::cout << "Enter event date: ";
    std::cin >> eventDate;
    std::cout << "Enter event time: ";
    std::cin >> eventTime;
}