[Core5Name]
Meter=String
X=0
Y=-4R
Text="Core 5"
MeterStyle=CometHeaderStyle
Group=Core5 | Cores

[Core5Graph]
Meter=Line
LineCount=2
MeasureName=Core5Usage
MeasureName2=Core5Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core5 | Cores

[Core5UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core5 | Cores

[Core5UsageValue]
Meter=String
MeasureName=Core5Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core5 | Cores

[Core5TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core5 | Cores

[Core5TempValue]
Meter=String
MeasureName=Core5Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core5 | Cores