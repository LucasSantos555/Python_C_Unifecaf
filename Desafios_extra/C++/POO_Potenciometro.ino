//==========================================
//    Mapeamento de hardware

class led{
  public: 

     led(char pot){
    this -> pot = pot;
    pinMode(pot, OUTPUT)
    
  }
    void lumenLed(unsigned int _lumen)
    {
      this ->lumen = _lumen;
      
    }

    void ilumina()
    {
      analogWrite(pot, lumen);
    }
  private:
  
  char pot;
  unsigned int lumen;
};
//=====================================================================================================================
class potenciometro{
  public:
  potenciometro(char pot, unsigned long int time)
  {
    Serial.begin(115200);
    this ->pot = pot;
    this -> time = time;
    save_time = 0;
  }

  int exibeDigital(){
    if(millis() - save_time >= time){
      value = map(analogRead(pot), 0, 4095, 0, 255);
        Serial.println(value);
        save_time = millis();
            
        return value;
    }
    
  }
private:
  char pot;
  unsigned long int value;
  unsigned long int time;
  unsigned long int save_time;
 
};
potenciometro poten(2, 700);
led leds(13);
void setup() {
  

}

void loop() {
  
leds.lumenLed(poten.exibeDigital());
  
leds.ilumina();
}
