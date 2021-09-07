[Core7Name]
Meter=String
X=0
Y=-3R
Text="Core 7"
MeterStyle=CometHeaderStyle
Group=Core7 | Cores

[Core7Graph]
Meter=Line
LineCount=2
MeasureName=Core7Usage
MeasureName2=Core7Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core7 | Cores

[Core7UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core7 | Cores

[Core7UsageValue]
Meter=String
MeasureName=Core7Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core7 | Cores

[Core7TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core7 | Cores

[Core7TempValue]
Meter=String
MeasureName=Core7Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core7 | Cores