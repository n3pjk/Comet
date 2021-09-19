[Core9Throttle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core9-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=1

[Core9Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core9-DTS-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=((#CPU_Mode# = 1) || (#CPU_Mode# = 3)) && (Core9Temp > #CPU_NormTemp#)
IfTrueAction=[!SetOption Core9Image ColorMatrix1 "(([Core9Temp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption Core9Image ColorMatrix2 "0;(1-([Core9Temp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"]
IfCondition2=((#CPU_Mode# = 1) || (#CPU_Mode# = 3)) && (Core9Temp <= #CPU_NormTemp#)
IfTrueAction2=[!SetOption Core9Image ColorMatrix1 "0;0;0;0;0"][!SetOption Core9Image ColorMatrix2 "0;1;0;0;0"]

[Core9T0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core9-T0-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core9T1Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core9-T1-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core9Usage]
Measure=Calc
Formula=(Core9T0Usage+Core9T1Usage)/2

IfConditionMode=1
IfCondition=#CPU_Mode# = 2
IfTrueAction=[!SetOption Core9Image ColorMatrix1 "([Core9Usage]/100);0;0;0;0"][!SetOption Core9Image ColorMatrix2 "0;([Core9Usage]/100);0;0;0"][!SetOption Core9Image ColorMatrix3 "0;0;([Core9Usage]/100);0;0"]
;[!SetOption Core9Image ColorMatrix5 "(0.25*[Core9Usage]/100);(0.25*[Core9Usage]/100);(0.25*[Core9Usage])/100);0;1"]
IfCondition2=#CPU_Mode# = 3
IfTrueAction2=[!SetOption Core9Image ColorMatrix3 "0;0;([Core9Usage]/100);0;0"][!SetOption Core9Image ColorMatrix5 "(0.125*[Core9Usage]/100);(0.125*[Core9Usage]/100);(0.125*[Core9Usage]/100);0;1"]

; -------------------------------------- Image -------------------------------------------

[Core9Image]
Meter=Image
ImageName=#@#Images\core9.png
X=(366*#scaleX#)
Y=(20*#scaleY#)
H=(95*#scaleY#+2)
MeterStyle=CometImageStyle[#CPU_Mode]
LeftMouseUpAction=[!ToggleMeterGroup Core9][!Redraw]
LeftMouseDoubleClickAction=["C:\Program Files\Intel\Intel(R) Extreme Tuning Utility\Client\XtuUILauncher.exe"]
ToolTipTitle=Core 9
ToolTipType=0
ToolTipText=[Core9Temp]°C