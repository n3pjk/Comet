[Core5Throttle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core5-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=1

[Core5Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core5-DTS-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=((#CPU_Mode# = 1) || (#CPU_Mode# = 3)) && (Core5Temp > #CPU_NormTemp#)
IfTrueAction=[!SetOption Core5Image ColorMatrix1 "(([Core5Temp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption Core5Image ColorMatrix2 "0;(1-([Core5Temp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"]
IfCondition2=((#CPU_Mode# = 1) || (#CPU_Mode# = 3)) && (Core5Temp <= #CPU_NormTemp#)
IfTrueAction2=[!SetOption Core5Image ColorMatrix1 "0;0;0;0;0"][!SetOption Core5Image ColorMatrix2 "0;1;0;0;0"]

[Core5T0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core5-T0-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core5T1Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core5-T1-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core5Usage]
Measure=Calc
Formula=(Core5T0Usage+Core5T1Usage)/2

IfConditionMode=1
IfCondition=#CPU_Mode# = 2
IfTrueAction=[!SetOption Core5Image ColorMatrix1 "(1-(1-[Core5Usage]/100)**2);0;0;0;0"][!SetOption Core5Image ColorMatrix2 "0;(1-(1-[Core5Usage]/100)**2);0;0;0"][!SetOption Core5Image ColorMatrix3 "0;0;(1-(1-[Core5Usage]/100)**2);0;0"]
IfCondition2=#CPU_Mode# = 3
IfTrueAction2=[!SetOption Core5Image ColorMatrix3 "0;0;(1-(1-[Core5Usage]/100)**2);0;0"][!SetOption Core5Image ColorMatrix5 "(0.125*[Core5Usage]/100);(0.125*[Core5Usage]/100);(0.125*[Core5Usage]/100);0;1"]

; -------------------------------------- Image -------------------------------------------

[Core5Image]
Meter=Image
ImageName=#@#Images\core9.png
X=(220*#scaleX#)
Y=(20*#scaleY#)
H=(95*#scaleY#+2)
MeterStyle=CometImageStyle[#CPU_Mode]
LeftMouseUpAction=[!ToggleMeterGroup Core5][!Redraw]
LeftMouseDoubleClickAction=["C:\Program Files\Intel\Intel(R) Extreme Tuning Utility\Client\XtuUILauncher.exe"]
ToolTipTitle=Core 5
ToolTipType=0
ToolTipText=[Core5Temp]°C