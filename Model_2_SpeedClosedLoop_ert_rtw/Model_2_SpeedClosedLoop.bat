cd .

if "%1"=="" ("C:\PROGRA~1\MATLAB\R2018b\bin\win64\gmake"  -f Model_2_SpeedClosedLoop.mk all) else ("C:\PROGRA~1\MATLAB\R2018b\bin\win64\gmake"  -f Model_2_SpeedClosedLoop.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
