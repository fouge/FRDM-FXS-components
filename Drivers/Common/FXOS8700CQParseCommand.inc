%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ParseCommand)
%;**     Description :
%;**         Shell Command Line parser. This method is enabled/disabled
%;**         depending on if you have the Shell enabled/disabled in the
%;**         properties.
%include Common\GeneralParameters.inc(27)
%;**       * cmd%Parcmd %>27 - Pointer to command string
%;**       * handled%Parhandled %>27 - Pointer to variable which tells if
%;** %>29 the command has been handled or not
%;**       * io%Pario %>27 - Pointer to I/O structure
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine
