[Core2Throttle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core2-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=1

[Core2Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core2-DTS-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=((#CPU_Mode# = 1) || (#CPU_Mode# = 3)) && (Core2Temp > #CPU_NormTemp#)
IfTrueAction=[!SetOption Core2Image ColorMatrix1 "(([Core2Temp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption Core2Image ColorMatrix2 "0;(1-([Core2Temp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"]
IfCondition2=((#CPU_Mode# = 1) || (#CPU_Mode# = 3)) && (Core2Temp <= #CPU_NormTemp#)
IfTrueAction2=[!SetOption Core2Image ColorMatrix1 "0;0;0;0;0"][!SetOption Core2Image ColorMatrix2 "0;1;0;0;0"]

[Core2T0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core2-T0-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core2T1Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core2-T1-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core2Usage]
Measure=Calc
Formula=(Core2T0Usage+Core2T1Usage)/2

IfConditionMode=1
IfCondition=#CPU_Mode# = 2
IfTrueAction=[!SetOption Core2Image ColorMatrix1 "([Core2Usage]/100);0;0;0;0"][!SetOption Core2Image ColorMatrix2 "0;([Core2Usage]/100);0;0;0"][!SetOption Core2Image ColorMatrix3 "0;0;([Core2Usage]/100);0;0"]
;[!SetOption Core2Image ColorMatrix5 "(0.25*[Core2Usage]/100);(0.25*[Core2Usage]/100);(0.25*[Core2Usage])/100);0;1"]
IfCondition2=#CPU_Mode# = 3
IfTrueAction2=[!SetOption Core2Image ColorMatrix3 "0;0;([Core2Usage]/100);0;0"][!SetOption Core2Image ColorMatrix5 "(0.125*[Core2Usage]/100);(0.125*[Core2Usage]/100);(0.125*[Core2Usage]/100);0;1"]

; -------------------------------------- Image -------------------------------------------

[Core2Image]
Meter=Image
ImageName=#@#Images\core8.png
X=(147*#scaleX#)
Y=(141*#scaleY#)
H=(92*#scaleY#+2)
MeterStyle=CometImageStyle[#CPU_Mode]
LeftMouseUpAction=[!ToggleMeterGroup Core2][!Redraw]
LeftMouseDoubleClickAction=["C:\Program Files\Intel\Intel(R) Extreme Tuning Utility\Client\XtuUILauncher.exe"]
ToolTipTitle=Core 2
ToolTipType=0
ToolTipText=[Core2Temp]°C