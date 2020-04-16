// This #include statement was automatically added by the Particle IDE.
#include <ThingSpeak.h>

// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

#define DHTPIN 6  // pin connected
#define DHTTYPE DHT22 // DHT 22 sensor 

DHT dht(DHTPIN, DHTYPE)

void setup()
{
    dht.begin(9600);
}

void loop()
{
    int t = dht.getTempCelcius(); 
    string temp = string(t);
    Particle publish("temp",temp, PRIVATE);
    delay(3000);
}