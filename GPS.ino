
/*void gps_locate(){
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
  }*/
