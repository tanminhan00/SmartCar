int Xread;
int Yread;
int Zread;


double Gx;
double Gy;
double Gz;

int t1; //time

void crash_check()
{
  Serial.print("Time");
  t1 = millis();
  Serial.println(t1*0.001);

  // update the x,y,z axis reading
  Xread= analogRead(xpin)-Xrest; 
  Yread= analogRead(ypin) -Yrest;
  Zread= analogRead(zpin) -Zrest;

  Gx = Xread/67.584; //The value from Adxl335 gyroscope datasheet
  Gy = Yread/67.584;
  Gz = Zread/67.584;

  Serial.print("Acceleration X : ");
  Serial.print(Gx);
  Serial.print("Acceleration Y : ");
  Serial.print(Gy);
  Serial.print("Acceleration Z : ");
  Serial.print(Gz);
  Serial.print("\n");

  lcd.setCursor(0,0);
  lcd.print("gx:");
  lcd.print(Gx);
  lcd.setCursor(8,0);;
  lcd.print(" gy:");
  lcd.print(Gy);
  lcd.setCursor(0,1);
  lcd.print("gz:");
  lcd.print(Gz);
  delay(1000);
  lcd.clear();

  if(Gy >= 0.35) //FRONT ACCIDENT
  {
 
    lcd.print("Front Accident !");
    digitalWrite(2, HIGH);
    SendAccidentMessage();
    delay(2000); 
    
  }
  
  if(Gz <= -0.35)// BACK ACCIDENT
  {
 
     lcd.print("Back Accident !");
     digitalWrite(2, HIGH);
     SendAccidentMessage();
     delay(2000); 
  }

 if(Gx >= 0.50) //LEFT ACCIDENT
  {
   
    lcd.print("Left Accident !");
    digitalWrite(2, HIGH);
    SendAccidentMessage();
    delay(2000);  
  }
  
  if(Gx <= -0.50) //RIGHT ACCIDENT
  {
 
    lcd.print("Right Accident !");
    digitalWrite(2, HIGH);
    SendAccidentMessage();
    delay(2000); 
  }

  if(Gx <= -1) //FLIP ACCIDENT
  {
    
    lcd.print("Car Flipped Accident !");
    digitalWrite(2, HIGH);
    SendAccidentMessage();
    delay(2000); 
  }

  if(Gx >= 1) //FLIP ACCIDENT
  {

    lcd.print("Car Flipped Accident !");
    digitalWrite(2, HIGH);
    SendAccidentMessage();
    delay(2000); 
  }
  

  lcd.clear();
 
  

}
