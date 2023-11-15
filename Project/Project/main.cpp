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

