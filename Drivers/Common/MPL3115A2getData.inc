%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (getData)
%;**     @brief
%;**         Get Altimeter/Barometer and Temperature data. 
%include Common\GeneralParameters.inc(27)
%;**         @param
%;**         void* buffer%>27 - Buffer : [0-1] temperature, [2-5] pressure/altitude 
%;**         @return
%;**         uint8_t %>27 - Error code. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine
