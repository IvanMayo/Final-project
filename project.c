/* https://github.com/KaliNuska/
ArduinoProjects/blob/master/Proyecto%202%20-
%20Primeros%20pasos%20con%20el%20c%C3%B3digo.md */
/* this code if a LED controller, only if the green LED is active
it will send a signal to a potentiometer and this will
send power to a motor */

int switchState1=0;
int switchState2=0; /* these ints are my switches and potentiometer */
int switchState3=0;
int potentiometer=0;

void setup(){
  
  pinMode(8, OUTPUT);  /* Potentiometer-MOTOR */
  pinMode(3, OUTPUT);  /* RED */
  pinMode(4, OUTPUT);  /* YELLOW  */
  pinMode(5, OUTPUT);  /* GREEN */
  pinMode(12, INPUT);  /* Switch 1 */
  pinMode(13, INPUT);  /* Switch 3 */
  pinMode(11, INPUT);  /* Switch 2 */
}

void loop(){
  switchState1 = digitalRead(12);  /* here I state that the pin 12
  is my switch1, I repeat the process for the others*/
  if (switchState1 == HIGH){ /* if switch has exactly signal,
  it will turn on the led */
   digitalWrite(3, HIGH); /* Declare that if the switch is ON, 
   the pin 3 gives a signal*/
  }
  else {
   digitalWrite(3, LOW); /* if the condition is not achieved
   it will ot send power */
  }
  /* the switch 2 connects to the pin 11 */
    switchState2 = digitalRead(11);
  if (switchState2 == HIGH){
   digitalWrite(4, HIGH);  /* pin 11 has signal, pin 4 sends signal*/
  }
  else {
   digitalWrite(4, LOW);
  }
  
  
 switchState3 = digitalRead(13);  /* switch 3 connects to 
 pin 13*/
  if (switchState3 == HIGH){
   digitalWrite(5, HIGH); /* switch 3 has signal, pin 5 sends signal*/
  }
    else {
   digitalWrite(5, LOW);
  }  /* condition not achieved, blocks the signal */
  
  
    
   potentiometer = digitalRead(8); /* This is my condition for my
   potentiometer */
   if ( switchState3 == LOW || switchState2 == HIGH || 
        switchState1 == HIGH ){
  	digitalWrite(8, LOW);
   }
  /* Here I condition my potentiometer to only receive signal 
   only if the GREEN LED is on */
  else { digitalWrite(8, HIGH); }
   
} 
