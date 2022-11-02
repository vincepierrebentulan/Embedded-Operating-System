// C++ code
//Vince Pierre Bentulan BSCpE-4A
//Shortest Job 

void setup()
{
  pinMode(8, OUTPUT); //set port 8 to output
  pinMode(9, OUTPUT); //set port 9 to output
  pinMode(10, OUTPUT); //set port 10 to output
  pinMode(11, OUTPUT); //set port 11 to output
  pinMode(12, OUTPUT); //set port 12 to output
  pinMode(13, OUTPUT); //set port 13 to output
}

void loop()
{
  shortest_job(); //calling the function.
}

void shortest_job(){
  int pin[6] = {8, 9, 10, 11, 12, 13};
  int time[6] = {10000,5000,8000,3000,1000,2000};
  //an array of time in milliseconds to be used in delay function.
  //index 0 or the P8 has a time of 10 seconds.
  //index 1 or the P9 has a time of 5 seconds.
  //index 2 or the P10 has a time of 8 seconds.
  //index 3 or the P11 has a time of 3 second.
  //index 4 or the P12 has a time of 1 second.
  //index 5 or the P13 has a time of 2 seconds.
  
  
  int temp; //temporary value used in swapping.
  
  for (int i=0; i<6; i++){
    for (int j=0; j<6; j++){
      if (time[i] < time[j]){
      	temp = time[i];
        time[i] = time[j];
        time[j] = temp;
        
        temp = pin[i];
        pin[i] = pin[j];
        pin[j] = temp;
      }
    }
  } //after executing this loop, the time array as well as pin array will be sorted in ascending.
  
  int count = 0; //used to identifies the element of time array.
  while (count != 6){
  	digitalWrite(pin[count], HIGH);
    delay(time[count]);
    digitalWrite(pin[count], LOW);
    count++;
  } //executes shortest job scheduling.
}