class Atm{
    int pin;
public:
    Atm() : pin(0) {}
    // Set pin if old_pin matches current pin, return 1 if success, 0 if fail
    int set_pin(int old_pin, int new_pin){
        if(pin == 0 || pin == old_pin){
            pin = new_pin;
            return 1;
        }else{
            return 0; // Pin change failed
        }
    }
};

int main(){
    Atm a1;
    a1.set_pin(0,1234);      // Initial set, old_pin is 0
    a1.set_pin(1234,5678);   // Change pin from 1234 to 5678
    // Assuming set_pin is a method to set the pin
    return 0;
} 