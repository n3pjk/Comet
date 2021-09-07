[CpuNameLabel]
Meter=String
X=0
Y=6R
MeasureName=CpuName
Text="%1"
MeterStyle=CometHeaderStyle
Group=CPU

[CpuGraph]
Meter=Line
LineCount=2
MeasureName=CpuUsage
MeasureName2=CpuTemp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=CPU

[CpuUsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=CPU

[CpuUsageValue]
Meter=String
MeasureName=CpuUsage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=CPU

[CpuTempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=CPU

[CpuTempValue]
Meter=String
MeasureName=CpuTemp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor= #Comet_Red#
Group=CPU

[CpuRAMLabel]
Meter=String
X=20R
Y=0r
Text="RAM"
MeterStyle=CometLabelStyle
Group=CPU

[CpuRAMValue]
Meter=String
MeasureName=CpuRAM
Percentual=1
X=1R
Y=0r
Text="%1%"
NumOfDecimals=0
MeterStyle=CometValueStyle
Group=CPU

[CpuSwapLabel]
Meter=String
X=3R
Y=0r
Text="Swap"
MeterStyle=CometLabelStyle
Group=CPU

[CpuSwapValue]
Meter=String
MeasureName=CpuSwap
Percentual=1
X=1R
Y=0r
Text="%1%"
NumOfDecimals=0
MeterStyle=CometValueStyle
Group=CPU