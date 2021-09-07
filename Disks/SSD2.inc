[SSD2Name]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD2-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD2-SensorInstance#
HWiNFOType=SensorName
HWiNFOLogHandler=3
RegExpSubstitute=1
Substitute="^(.*: )(.*) \(.*\)$":"\2"
UpdateDivider=30

[SSD2Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD2-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD2-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD2-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[SSD2NandTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD2-SMART-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD2-SMART-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD2-SMART-NandTemp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

[SSD2CtrlrTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD2-SMART-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD2-SMART-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD2-SMART-CtrlrTemp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

[SDD1DiskSpace]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=D:\

; --------------------------------------- Graph -------------------------------------------

[SSD2NameLabel]
Meter=String
X=0
Y=3R
MeasureName=SSD2Name
Text="%1"
MeterStyle=CometHeaderStyle
Group=SSD2

[SSD2Graph]
Meter=Line
LineCount=2
MeasureName=SSD2Usage
MeasureName2=SSD2CtrlrTemp
MeasureName3=SSD2NandTemp
Scale=1
Scale2=1
Scale3=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=SSD2

[SSD2UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=SSD2

[SSD2UsageValue]
Meter=String
MeasureName=SSD2Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=SSD2

[SSD2CtrlrTempLabel]
Meter=String
X=3R
Y=0r
Text="Ctrlr"
MeterStyle=CometLabelStyle
Group=SSD2

[SSD2CtrlrTempValue]
Meter=String
MeasureName=SSD2CtrlrTemp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Red#
DynamicVariables=1
Group=SSD2

[SSD2NandTempLabel]
Meter=String
X=3R
Y=0r
Text="Nand"
MeterStyle=CometLabelStyle
Group=SSD2

[SSD2NandTempValue]
Meter=String
MeasureName=SSD2NandTemp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Green#
DynamicVariables=1
Group=SSD2

[SSD2DriveLabel]
Meter=String
X=3R
Y=0r
Text="D:\"
MeterStyle=CometLabelStyle
Group=SSD2

[SSD2DriveValue]
Meter=String
MeasureName=MeasureSDD1
Percentual=1
X=1R
Y=0r
Text="%1%"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=SSD2