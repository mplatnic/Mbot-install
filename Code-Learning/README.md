All the information about coding can be found at:

https://www.arduino.cc/reference/en/

and at:
https://playground.arduino.cc/Main/GeneralCodeLibrary


Main Example:

IF ELSEIF  ELSE:

if (condition1)
{
   // do Thing A
}
else if (condition2)
{
  // do Thing B
}
else
{
  // do Thing C
}

----------------------------
SWITCH:

Parameters
var: a variable whose value to compare with various cases. Allowed data types: int, char
label1, label2: constants. Allowed data types: int, char

switch (var) {
  case label1:
    // statements
    break;
  case label2:
    // statements
    break;
  default:
    // statements
    break;
}

------------------------------
DELAY:

ms: the number of milliseconds to pause (unsigned long)
delay(ms)
