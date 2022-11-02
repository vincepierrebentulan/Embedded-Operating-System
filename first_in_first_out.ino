// C++ code
//Vince Pierre Bentulan BSCPE 4A
//First In First Out


 int pin[6] = {8,9,10,11,12,13};
 int time[]={10000,5000,8000,3000,1000,2000};
  //an array of time in milliseconds to be used in delay function.
  //index 0 or the P8 has a time of 10 seconds.
  //index 1 or the P9 has a time of 5 seconds.
  //index 2 or the P10 has a time of 8 seconds.
  //index 3 or the P11 has a time of 3 second.
  //index 4 or the P12 has a time of 1 second.
  //index 5 or the P13 has a time of 2 seconds.
int numled= 6;
	//number of LEDs

void setup()
{
  Serial.begin(9600);
  for(int i=0; i<numled; i++){
    pinMode(pin[i], OUTPUT);
	}
}

void loop(){
  for (int i = 0; i <numled; i++){
    digitalWrite(pin[i],HIGH);
    delay(time[i]);
    digitalWrite(pin[i],LOW);
  } 
  for(;;){
  }
}