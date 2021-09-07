[HDD0Name]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-HDD0-SensorId#
HWiNFOSensorInstance=#HWiNFO-HDD0-SensorInstance#
HWiNFOType=SensorName
HWiNFOLogHandler=3
RegExpSubstitute=1
Substitute="^(.*: )(.*) \(.*\)$":"\2"
UpdateDivider=30
Group=HDD0

[HDD0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-HDD0-SensorId#
HWiNFOSensorInstance=#HWiNFO-HDD0-SensorInstance#
HWiNFOEntryId=#HWiNFO-HDD0-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100
Group=HDD0

[HDD0Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-HDD0-SMART-SensorId#
HWiNFOSensorInstance=#HWiNFO-HDD0-SMART-SensorInstance#
HWiNFOEntryId=#HWiNFO-HDD0-SMART-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100
Group=HDD0

[HDD0DiskSpace]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=G:\
Group=HDD0

[HDD0NameLabel]
Meter=String
X=0
Y=3R
MeasureName=HDD0Name
Text="%1"
MeterStyle=CometHeaderStyle
Group=HDD0

[HDD0Graph]
Meter=Line
LineCount=2
MeasureName=HDD0Usage
MeasureName2=HDD0Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=HDD0

[HDD0UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=HDD0

[HDD0UsageValue]
Meter=String
MeasureName=HDD0Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=HDD0

[HDD0TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=HDD0

[HDD0TempValue]
Meter=String
MeasureName=HDD0Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Red#
DynamicVariables=1
Group=HDD0

[HDD0DriveLabel]
Meter=String
X=3R
Y=0r
Text="G:\"
MeterStyle=CometLabelStyle
Group=HDD0

[HDD0DriveValue]
Meter=String
MeasureName=HDD0DriveSpace
Percentual=1
X=1R
Y=0r
Text="%1%"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=HDD0