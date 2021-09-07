[Core0Name]
Meter=String
X=0
Y=1R
Text="Core 0"
MeterStyle=CometHeaderStyle
Group=Core0 | Cores

[Core0Graph]
Meter=Line
LineCount=2
MeasureName=Core0Usage
MeasureName2=Core0Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core0 | Cores

[Core0UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core0 | Cores

[Core0UsageValue]
Meter=String
MeasureName=Core0Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core0 | Cores

[Core0TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core0 | Cores

[Core0TempValue]
Meter=String
MeasureName=Core0Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core0 | Cores