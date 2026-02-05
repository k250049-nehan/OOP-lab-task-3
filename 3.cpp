#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool status;

public:
    // Parameterized constructor
    SmartDevice(string name, string type, bool state) {
        deviceName = name;
        deviceType = type;
        status = state;

        cout << deviceName << " (" << deviceType << ") is now alive and "
             << (status ? "ON" : "OFF") << "." << endl;
    }

    // Display function
    void display() {
        cout << "Device Name : " << deviceName << endl;
        cout << "Device Type : " << deviceType << endl;
        cout << "Status      : " << (status ? "ON" : "OFF") << endl;
        cout << "--------------------------" << endl;
    }

    // Destructor
    ~SmartDevice() {
        cout << deviceName << " is powering down forever. Goodbye" << endl;
    }
};

int main() {

    // Creating objects
    SmartDevice *d1 = new SmartDevice("Living Room Light", "Smart Light", true);
    SmartDevice *d2 = new SmartDevice("RoboCleaner X", "Robo Vacuum", false);

    cout << endl;
    d1->display();
    d2->display();

    // Deleting objects (destructor called)
    delete d1;
    delete d2;

    return 0;
}
