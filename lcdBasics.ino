#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);


void setup()
{
lcd.begin(16,2);
  
showMessage("333", "troooooooooooooooooooooooooo");
  
lcd.autoscroll();
}


void loop()
{
 


}

void showMessage(String line1, String line2)
{
  
  	/* Les lignes sont affiché et centrée automatiquement par rapport à leurt taille
    , le curseur se place automatiquement
    */
	/* ligne1 */
  if(line1.length() < 16)
  {
    lcd.setCursor((16 - line1.length()) / 2, 0);
    lcd.print(line1);
  }
  else
  {
    lcd.setCursor(0, 0);
    lcd.print(line2);
  }
  
  /*ligne2*/
  if(line2.length() < 16)
  {
    lcd.setCursor((16 - line2.length()) / 2, 1);
    lcd.print(line2);
  }
  else
  {
    lcd.setCursor(0, 1);
    lcd.print(line2);
  }
    
}
