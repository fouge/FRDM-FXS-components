%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetRawAccelMagXYZ)
%;**     @brief
%;**         Returns in an array the x, y and z accelerometer data as 16bit 
%;**         values and x, y and z magnetometer data as 16bit values. 
%include Common\GeneralParameters.inc(27)
%;**         @param
%;**         int16_t xyzijk%>27 - Pointer to an array of 6 signed 16bit  values 
%;**         %>29 which are used to return the accelerometer 
%;**         %>29 and magnetometer values. 
%;**         @return
%;**         uint8_t %>27 - Error code, ERR_OK for no error. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine
