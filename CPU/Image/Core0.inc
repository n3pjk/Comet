[Core0Throttle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core0-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=1

[Core0Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core0-DTS-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=((#CPU_Mode# = 1) || (#CPU_Mode# = 3)) && (Core0Temp > #CPU_NormTemp#)
IfTrueAction=[!SetOption Core0Image ColorMatrix1 "(([Core0Temp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption Core0Image ColorMatrix2 "0;(1-([Core0Temp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"]
IfCondition2=((#CPU_Mode# = 1) || (#CPU_Mode# = 3)) && (Core0Temp <= #CPU_NormTemp#)
IfTrueAction2=[!SetOption Core0Image ColorMatrix1 "0;0;0;0;0"][!SetOption Core0Image ColorMatrix2 "0;1;0;0;0"]

[Core0T0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core0-T0-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core0T1Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core0-T1-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core0Usage]
Measure=Calc
Formula=(Core0T0Usage+Core0T1Usage)/2

IfConditionMode=1
IfCondition=#CPU_Mode# = 2
IfTrueAction=[!SetOption Core0Image ColorMatrix1 "(1-(1-[Core0Usage]/100)**2);0;0;0;0"][!SetOption Core0Image ColorMatrix2 "0;(1-(1-[Core0Usage]/100)**2);0;0;0"][!SetOption Core0Image ColorMatrix3 "0;0;(1-(1-[Core0Usage]/100)**2);0;0"]
IfCondition2=#CPU_Mode# = 3
IfTrueAction2=[!SetOption Core0Image ColorMatrix3 "0;0;(1-(1-[Core0Usage]/100)**2);0;0"][!SetOption Core0Image ColorMatrix5 "(0.125*[Core0Usage]/100);(0.125*[Core0Usage]/100);(0.125*[Core0Usage]/100);0;1"]

; -------------------------------------- Image -------------------------------------------

[Core0Image]
Meter=Image
ImageName=#@#Images\core8.png
X=(74*#scaleX#+1)
Y=(141*#scaleY#)
H=(92*#scaleY#+2)
MeterStyle=CometImageStyle[#CPU_Mode]
LeftMouseUpAction=[!ToggleMeterGroup Core0][!Redraw]
LeftMouseDoubleClickAction=["C:\Program Files\Intel\Intel(R) Extreme Tuning Utility\Client\XtuUILauncher.exe"]
ToolTipTitle=Core 0
ToolTipType=0
ToolTipText=[Core0Temp]°C
