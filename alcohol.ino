void alcohol_check(){
  alcohol = analogRead(alcoholcheck);
  Serial.println(alcohol);
  
  
  while(alcohol >500){
      digitalWrite(2, HIGH);
    
      lcd.setCursor(2,0);
      lcd.print("Alcohol Level :"); 
      lcd.setCursor(4,1);
      lcd.print("ALERTED");
      alcohol = analogRead(alcoholcheck);
      Serial.println(alcohol);
      SendAlcoholMessage();
  }
  
    digitalWrite(2,LOW);
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("Alcohol Level :");
    lcd.setCursor(6,1);
    lcd.print("NORMAL");
  
    delay(1000);
    lcd.clear();
}
