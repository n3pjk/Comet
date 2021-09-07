[Core4Name]
Meter=String
X=0
Y=-4R
Text="Core 4"
MeterStyle=CometHeaderStyle
Group=Core4 | Cores

[Core4Graph]
Meter=Line
LineCount=2
MeasureName=Core4Usage
MeasureName2=Core4Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core4 | Cores

[Core4UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core4 | Cores

[Core4UsageValue]
Meter=String
MeasureName=Core4Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core4 | Cores

[Core4TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core4 | Cores

[Core4TempValue]
Meter=String
MeasureName=Core4Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core4 | Cores