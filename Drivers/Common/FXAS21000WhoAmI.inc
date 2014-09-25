%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (WhoAmI)
%;**     @brief
%;**         Returns the value of he WHO_AM_I (0x0C) register 
%include Common\GeneralParameters.inc(27)
%;**         @param
%;**         uint8_t value%>27 - Pointer to value to store 
%;**         @return
%;**         uint8_t %>27 - Error code, ERR_OK if no error 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine
