[Core6Name]
Meter=String
X=0
Y=-3R
Text="Core 6"
MeterStyle=CometHeaderStyle
Group=Core6 | Cores

[Core6Graph]
Meter=Line
LineCount=2
MeasureName=Core6Usage
MeasureName2=Core6Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core6 | Cores

[Core6UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core6 | Cores

[Core6UsageValue]
Meter=String
MeasureName=Core6Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core6 | Cores

[Core6TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core6 | Cores

[Core6TempValue]
Meter=String
MeasureName=Core6Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core6 | Cores