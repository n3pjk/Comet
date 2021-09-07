[Core9Name]
Meter=String
X=0
Y=-4R
Text="Core 9"
MeterStyle=CometHeaderStyle
Group=Core9 | Cores

[Core9Graph]
Meter=Line
LineCount=2
MeasureName=Core9Usage
MeasureName2=Core9Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core9 | Cores

[Core9UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core9 | Cores

[Core9UsageValue]
Meter=String
MeasureName=Core9Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core9 | Cores

[Core9TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core9 | Cores

[Core9TempValue]
Meter=String
MeasureName=Core9Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core9 | Cores
