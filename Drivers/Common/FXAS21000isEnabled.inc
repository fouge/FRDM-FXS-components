%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (isEnabled)
%;**     @brief
%;**         Returns the status of the the ACTIVE bit in the CTRL register 
%;**         1. 
%include Common\GeneralParameters.inc(27)
%;**         @param
%;**         bool isEnabled%>27 - Pointer to store the result 
%;**         @return
%;**         uint8_t %>27 - Error code, ERR_OK if no error 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine
