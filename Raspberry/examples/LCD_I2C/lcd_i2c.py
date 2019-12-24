import I2C_LCD_driver
from time import *

lcd = I2C_LCD_driver.lcd()
lcd.lcd_display_string("Hello world", 2, 3)
