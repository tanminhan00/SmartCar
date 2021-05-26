void SendAccidentMessage()
{
  //GPS Module
  while(gpsSerial.available()){ // check for gps data
      if(gps.encode(gpsSerial.read())){ // encode gps data
        gps.get_position(&lati,&lon); // get latitude and longitude
        // display position
        return(lati,lon);
        Serial.print("Position: ");
        Serial.print("Coordinate ");Serial.print(lati/1000000); Serial.print(".");Serial.print(lati%1000000);Serial.print(" ");// print latitude to serialmonitor
        Serial.print(", ");Serial.print(lon/1000000); Serial.print(".");Serial.println(lon%1000000);// print longitude to serialmonitor
        delay(1000); 
        
      }
    }
  
  Serial.println ("Sending Message");
  SIM900A.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);
  Serial.println ("Set SMS Number");
  SIM900A.println("AT+CMGS=\"+60183897948\"\r"); //Mobile phone number to send message
  delay(1000);
  Serial.println ("Set SMS Content");
  SIM900A.println("Driver Accident Caused ! ");// Messsage content
  SIM900A.println("Driver Location : ");
  SIM900A.println("http://maps.google.com/maps?q=loc:");
  SIM900A.print(lati/100000);
  SIM900A.print(".");
  SIM900A.print(lati%10000);
  SIM900A.print(",");
  SIM900A.print(lon/10000);
  SIM900A.print(".");
  SIM900A.print(lati%10000);

  delay(100);
  Serial.println ("Finish");
  SIM900A.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
  Serial.println ("Message has been sent");

}

void SendAlcoholMessage()
{
  //GPS Module
  while(gpsSerial.available()){ // check for gps data
      if(gps.encode(gpsSerial.read())){ // encode gps data
        gps.get_position(&lati,&lon); // get latitude and longitude
        // display position
        return(lati,lon);
        Serial.print("Position: ");
        Serial.print("Coordinate ");Serial.print(lati/1000000); Serial.print(".");Serial.print(lati%1000000);Serial.print(" ");// print latitude to serialmonitor
        Serial.print(", ");Serial.print(lon/1000000); Serial.print(".");Serial.println(lon%1000000);// print longitude to serialmonitor
        delay(1000); 
        
      }
    }
  
  Serial.println ("Sending Message");
  SIM900A.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);
  Serial.println ("Set SMS Number");
  SIM900A.println("AT+CMGS=\"+60183897948\"\r"); //Mobile phone number to send message
  delay(1000);
  Serial.println ("Set SMS Content");
  SIM900A.println("Driver Alcohol Alerted ! ");// Messsage content
  SIM900A.println("Driver Location : ");
  SIM900A.println("http://maps.google.com/maps?q=loc:");
  SIM900A.print(lati/100000);
  SIM900A.print(".");
  SIM900A.print(lati%10000);
  SIM900A.print(",");
  SIM900A.print(lon/10000);
  SIM900A.print(".");
  SIM900A.print(lati%10000);

  delay(100);
  Serial.println ("Finish");
  SIM900A.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
  Serial.println ("Message has been sent");

}

void SendOverheatedMessage()
{
  //GPS Module
  while(gpsSerial.available()){ // check for gps data
      if(gps.encode(gpsSerial.read())){ // encode gps data
        gps.get_position(&lati,&lon); // get latitude and longitude
        // display position
        return(lati,lon);
        Serial.print("Position: ");
        Serial.print("Coordinate ");Serial.print(lati/1000000); Serial.print(".");Serial.print(lati%1000000);Serial.print(" ");// print latitude to serialmonitor
        Serial.print(", ");Serial.print(lon/1000000); Serial.print(".");Serial.println(lon%1000000);// print longitude to serialmonitor
        delay(1000); 
        
      }
    }
  
  Serial.println ("Sending Message");
  SIM900A.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);
  Serial.println ("Set SMS Number");
  SIM900A.println("AT+CMGS=\"+60183897948\"\r"); //Mobile phone number to send message
  delay(1000);
  Serial.println ("Set SMS Content");
  SIM900A.println("Car Temperature Overheated ! ");// Messsage content
  SIM900A.println("Driver Location : ");
  SIM900A.println("http://maps.google.com/maps?q=loc:");
  SIM900A.print(lati/100000);
  SIM900A.print(".");
  SIM900A.print(lati%10000);
  SIM900A.print(",");
  SIM900A.print(lon/10000);
  SIM900A.print(".");
  SIM900A.print(lati%10000);

  delay(100);
  Serial.println ("Finish");
  SIM900A.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
  Serial.println ("Message has been sent");

}
