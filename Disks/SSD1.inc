[SSD1Name]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD1-SensorInstance#
HWiNFOType=SensorName
HWiNFOLogHandler=3
RegExpSubstitute=1
Substitute="^(.*: )(.*) \(.*\)$":"\2"
UpdateDivider=30

[SSD1Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD1-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD1-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[SSD1NandTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD1-SMART-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD1-SMART-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD1-SMART-NandTemp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

[SSD1CtrlrTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SSD1-SMART-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD1-SMART-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD1-SMART-CtrlrTemp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

[SDD1DiskSpace]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=D:\

; --------------------------------------- Graph -------------------------------------------

[SSD1NameLabel]
Meter=String
X=0
Y=3R
MeasureName=SSD1Name
Text="%1"
MeterStyle=CometHeaderStyle
Group=SSD1

[SSD1Graph]
Meter=Line
LineCount=2
MeasureName=SSD1Usage
MeasureName2=SSD1CtrlrTemp
MeasureName3=SSD1NandTemp
Scale=1
Scale2=1
Scale3=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=SSD1

[SSD1UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=SSD1

[SSD1UsageValue]
Meter=String
MeasureName=SSD1Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=SSD1

[SSD1CtrlrTempLabel]
Meter=String
X=3R
Y=0r
Text="Ctrlr"
MeterStyle=CometLabelStyle
Group=SSD1

[SSD1CtrlrTempValue]
Meter=String
MeasureName=SSD1CtrlrTemp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Red#
DynamicVariables=1
Group=SSD1

[SSD1NandTempLabel]
Meter=String
X=3R
Y=0r
Text="Nand"
MeterStyle=CometLabelStyle
Group=SSD1

[SSD1NandTempValue]
Meter=String
MeasureName=SSD1NandTemp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Green#
DynamicVariables=1
Group=SSD1

[SSD1DriveLabel]
Meter=String
X=3R
Y=0r
Text="D:\"
MeterStyle=CometLabelStyle
Group=SSD1

[SSD1DriveValue]
Meter=String
MeasureName=MeasureSDD1
Percentual=1
X=1R
Y=0r
Text="%1%"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=SSD1