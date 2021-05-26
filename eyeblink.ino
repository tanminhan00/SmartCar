
void checkSleepy()
{
  if(digitalRead(SENSE))
    {
       digitalWrite(LED_BUILTIN, LOW);
       digitalWrite(2, LOW);
     
    }
  else
    {
      delay (1000);
      if(digitalRead(SENSE)) //Checking after 2s whether the eye is still closing
      {
         digitalWrite(LED_BUILTIN, LOW);
         digitalWrite(2, LOW);
      }
      else
      {
           digitalWrite(LED_BUILTIN, HIGH);  
           digitalWrite(2, HIGH);
           lcd.clear();
           lcd.print("Driver Sleepy !");
           delay(5000);
           lcd.clear();
           lcd.print("Please Wake Up !");
           SendAccidentMessage();
           delay(500);
       }
     
    }

    lcd.clear();
}
