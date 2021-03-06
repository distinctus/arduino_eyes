


#define EYE_BALL_CENTER B11100111 
#define EYE_BALL_LEFT_1 B10011111 
#define EYE_BALL_RIGHT_1 B11110011 


/**

  Here we define list of bitmaps to construct each eye position. 
  A function is declared for each position which can be chained to animate more complex movement.


  Actual 8x8 dot matrix is 
  matrix    - actual
   up           left
*/




static uint8_t PROGMEM
eyes_shut_1_bmp[] = {
    B00000000,
    B01111110,
    B11111111,
    B11100111,
    B11100111,
    B11111111,
    B01111110,
    B00000000,
},

eyes_shut_2_bmp[] = {
    B00000000,
    B00000000,
    B11111111,
    B11100111,
    B11100111,
    B11111111,
    B00000000,
    B00000000
},
eyes_shut_3_bmp[] = {
    B00000000,
    B00000000,
    B00000000,
    B11100111,
    B11100111,
    B00000000,
    B00000000,
    B00000000
},

eyes_shut_bmp[] = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
},

eyes_center_small_bmp[] = { 
    B00111100,
    B01111110,
    B11111111,
    EYE_BALL_CENTER,
    EYE_BALL_CENTER,
    B11111111,
    B01111110,
    B00111100
  },     

eyes_center_right_bmp[] = { 
    B00111100,
    B01111110,
    B11111111,
    EYE_BALL_RIGHT_1,
    EYE_BALL_RIGHT_1,
    B11111111,
    B01111110,
    B00111100
  }, 

eyes_center_right_max_bmp[] = { 
    B00100100,
    B01100110,
    B11111111,
    B11111111,
    B11111111,
    B11111111,
    B01111110,
    B00111100
  }, 

  
eyes_center_left_bmp[] = { 
    B00111100,
    B01111110,
    B11111111,
    EYE_BALL_LEFT_1,
    EYE_BALL_LEFT_1,
    B11111111,
    B01111110,
    B00111100
  },

eyes_center_left_max_bmp[] = { 
    B00111100,
    B01111110,
    B11111111,
    B11111111,
    B11111111,
    B11111111,
    B01100110,
    B00100100
  },

eyes_center_large_bmp[] = { 
    B00111100,
    B01101110,
    B11000111,
    B10000011,
    B11000111,
    B11101111,
    B00111100,
    B01111110
  },
  
  
eyes_center_up_bmp[] = { 
    B00111100,
    B01111110,
    B11111111,
    B11001111,
    B11001111,
    B11111111,
    B01111110,
    B00111100
  }, 
  
  
eyes_down_right_bmp[] = { 
    B00111100,
    B01111110,
    B11111001,
    B11111001,
    B11111111,
    B11111111,
    B01111110,
    B00111100
  },
  
 eyes_down_left_bmp[] = { 
    B00111100,
    B01111110,
    B10111111,
    B10111111,
    B11111111,
    B11111111,
    B01111110,
    B00111100
  },
  
  
eyes_up_right_bmp[] = { 
    B00111100,
    B01111110,
    B10011111,
    B10011111,
    B11111111,
    B11111111,
    B01111110,
    B00111100
  },
    
eyes_up_left_bmp[] = { 
    B00111100,
    B01111110,
    B11111111,
    B11011111,
    B10001111,
    B11011111,
    B01111110,
    B00111100
  }; 
 
