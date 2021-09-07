[Core3Name]
Meter=String
X=0
Y=-3R
Text="Core 3"
MeterStyle=CometHeaderStyle
Group=Core3 | Cores

[Core3Graph]
Meter=Line
LineCount=2
MeasureName=Core3Usage
MeasureName2=Core3Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core3 | Cores

[Core3UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core3 | Cores

[Core3UsageValue]
Meter=String
MeasureName=Core3Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core3 | Cores

[Core3TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core3 | Cores

[Core3TempValue]
Meter=String
MeasureName=Core3Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core3 | Cores