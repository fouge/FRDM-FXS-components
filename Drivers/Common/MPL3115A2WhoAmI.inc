%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (WhoAmI)
%;**     @brief
%;**         Returns the value of the WHO_AM_I register (0xC4) 
%include Common\GeneralParameters.inc(27)
%;**         @param
%;**         uint8_t value%>27 - Pointer to value to store 
%;**         @return
%;**         uint8_t %>27 - Error code 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine
