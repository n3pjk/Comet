; --------------------------------------- GPU1 -------------------------------------------

[HWiNFOGPU1Name]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU1-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU1-SensorInstance#
HWiNFOType=SensorName
RegExpSubstitute=1
Substitute="^(.*]: )":"","(: .*)$":""
UpdateDivider=30
Group=GPU1

[HWiNFOGPU1Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU1-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU1-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU1-Usage#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Group=GPU1

[HWiNFOGPU1Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU1-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU1-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU1-Temp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Group=GPU1

[HWiNFOGPU1Red]
Measure=Calc
Formula=HWiNFOGPU1Temp*255/100
Group=GPU1

[HWiNFOGPU1Green]
Measure=Calc
Formula=(100-HWiNFOGPU1Temp)*255/100
Group=GPU1

[HWiNFOGPU1Fan]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU1-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU1-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU1-Fan#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Group=GPU1

[MeterHWiNFOGPU1Label]
Meter=String
X=0
Y=3R
MeasureName=HWiNFOGPU1Name
Text="%1"
MeterStyle=CometHeaderStyle
Group=GPU1

[MeterGPU1Graph]
Meter=Line
LineCount=3
MeasureName=HWiNFOGPU1Fan
MeasureName2=HWiNFOGPU1Temp
MeasureName3=HWiNFOGPU1Usage
Scale=1
Scale2=1
Scale3=1
MeterStyle=CometGPUGraphStyle
X=0
Y=0r
Group=GPU1

[MeterHWiNFOGPU1UsageLabel]
Meter=String
X=0
Y=3R
Text="Usage"
MeterStyle=CometLabelStyle
Group=GPU1

[MeterHWiNFOGPU1UsageValue]
Meter=String
MeasureName=HWiNFOGPU1Usage
X=1R
Y=0r
Text="%1%"
NumOfDecimals=2
MeterStyle=CometValueStyle
FontColor=#Comet_Cyan#
Group=GPU1

[MeterHWiNFOGPU1TempLabel]
Meter=String
X=3R
Y=0r
Text="Temp"
MeterStyle=CometLabelStyle
Group=GPU1

[MeterHWiNFOGPU1TempValue]
Meter=String
MeasureName=HWiNFOGPU1Temp
X=1R
Y=0r
Text="%1°C"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=[HWiNFOGPU1Red],[HWiNFOGPU1Green],0,255
DynamicVariables=1
Group=GPU1

[MeterHWiNFOGPU1FanLabel]
Meter=String
X=3R
Y=0r
Text="Fan:"
MeterStyle=CometLabelStyle
Group=GPU1

[MeterHWiNFOGPU1FanValue]
Meter=String
MeasureName=HWiNFOGPU1Fan
X=1R
Y=0r
Text="%1%"
NumOfDecimals=0
MeterStyle=CometValueStyle
FontColor=#Comet_Green#
Group=GPU1