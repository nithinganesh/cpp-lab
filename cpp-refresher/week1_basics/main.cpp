#include <iostream>
#include <memory>

class Sensor {
public:
    Sensor(std::string n) : name(std::move(n)) { std::cout << "Init " << name << "\n"; }
    ~Sensor() { std::cout << "Destroy " << name << "\n"; }
    void read() const { std::cout << "Reading from " << name << "\n"; }
private:
    std::string name;
};

int main() {
    auto sensor = std::make_unique<Sensor>("Temperature");
    sensor->read();
}
