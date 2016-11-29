
int vcab= 0;
int Vin= 5;
float Vout= 0;
float R1= 100;
float R2= 0;
float adc= 0;

void setup()
{
Serial.begin(9600);
Serial.println("=================== Ω OHM Ω ==================");
Serial.println("               Jan Hong & Levi ");
}

void loop()
{
vcab= analogRead(A0);
if(vcab) 
{
vcab= analogRead(A0);
adc= vcab * Vin;
Vout= (adc)/1024.0;
adc= (Vin/Vout) -1;
R2= R1 * adc;
Serial.print("\nVout: ");
Serial.println(Vout);
Serial.print("R2: ");
Serial.println(R2);
delay(5000);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    }
}
