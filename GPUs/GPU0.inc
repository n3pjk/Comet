; --------------------------------------- GPU0 -------------------------------------------

[HWiNFOGPU0Name]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOType=SensorName
RegExpSubstitute=1
Substitute="^(.*]: )":"","(: .*)$":""
UpdateDivider=30
Group=GPU0

[HWiNFOGPU0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Usage#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Group=GPU0

[HWiNFOGPU0Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Group=GPU0

[HWiNFOGPU0Red]
Measure=Calc
Formula=HWiNFOGPU0Temp*255/100
Group=GPU0

[HWiNFOGPU0Green]
Measure=Calc
Formula=(100-HWiNFOGPU0Temp)*255/100
Group=GPU0

[MeterHWiNFOGPU0Label]
Meter=String
X=0
Y=3R
MeasureName=HWiNFOGPU0Name
Text="%1"
MeterStyle=CometHeaderStyle
Group=GPU0

[MeterGPU0Graph]
Meter=Line
LineCount=2
MeasureName=HWiNFOGPU0Usage
MeasureName2=HWiNFOGPU0Temp
Scale=1
Scale2=1
MeterStyle=CometGraphStyle
X=0
Y=0r
Group=GPU0

[MeterHWiNFOGPU0UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=GPU0

[MeterHWiNFOGPU0UsageValue]
Meter=String
MeasureName=HWiNFOGPU0Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=GPU0

[MeterHWiNFOGPU0TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=GPU0

[MeterHWiNFOGPU0TempValue]
Meter=String
MeasureName=HWiNFOGPU0Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=[HWiNFOGPU0Red],[HWiNFOGPU0Green],0,255
DynamicVariables=1
Group=GPU0
