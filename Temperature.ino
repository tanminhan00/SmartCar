void temperature_check(){
   
     temp = analogRead(tempcheck);
     temp = temp *0.4888;
     
    Serial.print("TEMPERATURE: ");
    Serial.print(temp);
    Serial.print("*C");
    Serial.println();
    
    lcd.setCursor(3,0);
    lcd.print("TEMPERATURE: ");
    lcd.setCursor(6,1);
    lcd.print(temp);
    if(temp > 55){
      digitalWrite(2, HIGH);
      lcd.clear();
      lcd.print("Car temperature");
      lcd.setCursor(0,1);
      lcd.print("Overheated");
      SendOverheatedMessage();
      delay(1000);
    }
    else if(temp > 100){
      digitalWrite(2, HIGH);
      lcd.clear();
      lcd.print("Fire Accident !");
      SendAccidentMessage();
      delay(1000);  
      
    }
    delay(1000);
    lcd.clear();
  }
