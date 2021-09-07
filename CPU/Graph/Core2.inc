[Core2Name]
Meter=String
X=0
Y=-2R
Text="Core 2"
MeterStyle=CometHeaderStyle
Group=Core2 | Cores

[Core2Graph]
Meter=Line
LineCount=2
MeasureName=Core2Usage
MeasureName2=Core2Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core2 | Cores

[Core2UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core2 | Cores

[Core2UsageValue]
Meter=String
MeasureName=Core2Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core2 | Cores

[Core2TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core2 | Cores

[Core2TempValue]
Meter=String
MeasureName=Core2Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core2 | Cores