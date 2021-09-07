[Core8Name]
Meter=String
X=0
Y=0R
Text="Core 8"
MeterStyle=CometHeaderStyle
Group=Core8 | Cores

[Core8Graph]
Meter=Line
LineCount=2
MeasureName=Core8Usage
MeasureName2=Core8Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=Core8 | Cores

[Core8UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=Core8 | Cores

[Core8UsageValue]
Meter=String
MeasureName=Core8Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=Core8 | Cores

[Core8TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=Core8 | Cores

[Core8TempValue]
Meter=String
MeasureName=Core8Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=Core8 | Cores