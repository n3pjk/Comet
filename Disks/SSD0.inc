
[SSD0Name]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD0-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD0-SensorInstance#
HWiNFOType=SensorName
HWiNFOLogHandler=3
RegExpSubstitute=1
Substitute="^(.*: )(.*) \(.*\)$":"\2"
UpdateDivider=30

[SSD0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD0-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD0-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD0-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[SSD0NandTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD0-SMART-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD0-SMART-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD0-SMART-NandTemp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

[SSD0CtrlrTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD0-SMART-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD0-SMART-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD0-SMART-CtrlrTemp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

[SDD0DiskSpace]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=C:\

; --------------------------------------- Graph -------------------------------------------

[SSD0NameLabel]
Meter=String
X=0
Y=3R
MeasureName=SSD0Name
Text="%1"
MeterStyle=CometHeaderStyle
Group=SSD0

[SSD0Graph]
Meter=Line
LineCount=2
MeasureName=SSD0Usage
MeasureName2=SSD0CtrlrTemp
MeasureName3=SSD0NandTemp
Scale=1
Scale2=1
Scale3=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=SSD0

[SSD0UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=SSD0

[SSD0UsageValue]
Meter=String
MeasureName=SSD0Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=SSD0

[SSD0CtrlrTempLabel]
Meter=String
X=3R
Y=0r
Text="Ctrlr"
MeterStyle=CometLabelStyle
Group=SSD0

[SSD0CtrlrTempValue]
Meter=String
MeasureName=SSD0CtrlrTemp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Red#
DynamicVariables=1
Group=SSD0

[SSD0NandTempLabel]
Meter=String
X=2R
Y=0r
Text="Nand"
MeterStyle=CometLabelStyle
Group=SSD0

[SSD0NandTempValue]
Meter=String
MeasureName=SSD0NandTemp
X=0R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Green#
DynamicVariables=0
Group=SSD0

[SDD0DriveLabel]
Meter=String
X=3R
Y=0r
Text="C:\"
MeterStyle=CometLabelStyle
Group=SSD0

[SDD0DriveValue]
Meter=String
MeasureName=SDD0DiskSpace
Percentual=1
X=1R
Y=0r
Text="%1%"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=SSD0