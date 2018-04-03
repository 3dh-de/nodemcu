#include <arduino.h>

#include <stdio.h>                           // enthält die Funktion printf() ...

#define MAX_STRING_LENGTH  255

const int  max_string_length    = 255;

char       adresse_strasse[255] = "Musterweg\0";  // Zeichenkette mit max. 255 Bytes/Zeichen
int        adresse_hausnummer   = 5;              // Ganzzahl = "Integer"

#if 1
  char*      adresse_ort          = "Musterhausen"; // legt Zeichenfolge und 12+1 Bytes autom. an
#else
  char*      adresse_ort          = 0;            // identisch wie vorherige Anweisung, nur komplizierter
  int len = strlen("Musterhausen");   // len = 12
  adresse_ort = (char*)malloc(len+1);
  memcpy(adresse_ort, "Musterhausen", len+1);
#endif

char  adresse_strassen[10][255];             // Array (Liste) von 10x strasse mit 255 Zeichen (Bytes)
 

/* 
 *  SO KÖNNTE die main() von Arduino aussehen:
 *  
int main() {
 
   setup();

   if (adresse_hausnummer < 1) {
     return -1;
   }
   
   while (adresse_hausnummer > 0) {
     loop();
   }
   
   return 0;
}
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(115200);

  // geht leider nicht in C, aber in JavaScript, Java & Co:
  // adresse_strasse = "Musterweg" + adresse_hausnummer;
  
  printf("Strasse: %s %d", adresse_strasse, adresse_hausnummer);
  
  Serial.printf("Strasse: %s %d", adresse_strasse, adresse_hausnummer);
 
  strcpy(adresse_strasse, "Musterstrasse");
 
  sprintf(adresse_strasse, "%s %d", adresse_strasse, adresse_hausnummer);

  printf("Strasse: %s", adresse_strasse);
}


int zaehler = 0;


void loop() {
  zaehler += 1;

  if (zaehler > 9) {
    zaehler = 0;
  }

  Serial.printf("Zaehler = %d\n", zaehler);
  
  digitalWrite(LED_BUILTIN, LOW);
  
  delay(1000 + zaehler * 100);
  
  digitalWrite(LED_BUILTIN, HIGH);
  
  delay(1000 - zaehler * 100);
}
