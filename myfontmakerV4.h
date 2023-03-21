class my_font
{
  public:  
  const uint8_t *font_poniter;
  const uint8_t *font_length_poniter;  
  my_font(const uint8_t * _font_poniter,const uint8_t * _font_length_poniter)
  {
     font_poniter = _font_poniter;
     font_length_poniter = _font_length_poniter;
  }
};

//them font cua ban vao day
