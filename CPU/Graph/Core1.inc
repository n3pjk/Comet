[Core1Name]
Meter=String
X=0
Y=-1R
Text="Core 1"
MeterStyle=CometHeaderStyle
Group=Core1 | Cores

[Core1Graph]
Meter=Line
LineCount=2
MeasureName=Core1Usage
MeasureName2=Core1Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core1 | Cores

[Core1UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core1 | Cores

[Core1UsageValue]
Meter=String
MeasureName=Core1Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core1 | Cores

[Core1TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core1 | Cores

[Core1TempValue]
Meter=String
MeasureName=Core1Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core1 | Cores