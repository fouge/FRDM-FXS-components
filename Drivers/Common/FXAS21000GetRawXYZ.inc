%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetRawXYZ)
%;**     @brief
%;**         Returns in an array the 3-axis gyroscope data (X/Y/Z) as uint16 
%;**         (14-bit) values. 
%include Common\GeneralParameters.inc(27)
%;**         @param
%;**         int16_t xyz%>27 - Pointer to an array of three 16-bit values, 
%;**         %>29 which are used to return the gyroscope values. 
%;**         @return
%;**         uint8_t %>27 - Error code, ERR_OK for no error. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine
