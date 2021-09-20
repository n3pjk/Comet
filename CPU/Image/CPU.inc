[CpuName]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOType=SensorName
HWiNFOLogHandler=3
RegExpSubstitute=1
Substitute="^(.*]: )":"","(: .*)$":""
UpdateDivider=30

[CpuThrottle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=1

[CpuUsage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=3
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=#CPU_Mode# = 2
IfTrueAction=[!SetOption CpuImage ColorMatrix1 "(1-(1-[CpuUsage]/100)**2);0;0;0;0"][!SetOption CpuImage ColorMatrix2 "0;(1-(1-[CpuUsage]/100)**2);0;0;0"][!SetOption CpuImage ColorMatrix3 "0;0;(1-(1-[CpuUsage]/100)**2);0;0"][!SetOption NorthBridgeImage ColorMatrix1 "(1-(1-[CpuUsage]/100)**2);0;0;0;0"][!SetOption NorthBridgeImage ColorMatrix2 "0;(1-(1-[CpuUsage]/100)**2);0;0;0"][!SetOption NorthBridgeImage ColorMatrix3 "0;0;(1-(1-[CpuUsage]/100)**2);0;0"]

[CpuTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU-DTS-Package#
HWiNFOType=CurrentValue
HWiNFOLogHandler=3
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode# = 1) && (CpuTemp > #CPU_NormTemp#)
IfTrueAction=[!SetOption CpuImage ColorMatrix1 "(([CpuTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption CpuImage ColorMatrix2 "0;(1-([CpuTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"]
IfCondition2=(#CPU_Mode# = 1) && (CpuTemp <= #CPU_NormTemp#)
IfTrueAction2=[!SetOption CpuImage ColorMatrix1 "0;0;0;0;0"][!SetOption CpuImage ColorMatrix2 "0;1;0;0;0"]
IfCondition3=(#CPU_Mode# = 3) && (CpuTemp > #CPU_NormTemp#)
IfTrueAction3=[!SetOption CpuImage ColorMatrix1 "(([CpuTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption CpuImage ColorMatrix2 "0;(1-([CpuTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"][!SetOption CpuImage ColorMatrix3 "0;0;([CpuUsage]/100);0;0"][!SetOption CpuImage ColorMatrix5 "(0.125*[CpuUsage]/100);(0.125*[CpuUsage]/100);(0.125*[CpuUsage]/100);0;1"]
IfCondition4=(#CPU_Mode# = 3) && (CpuTemp <= #CPU_NormTemp#)
IfTrueAction4=[!SetOption CpuImage ColorMatrix1 "0;0;0;0;0"][!SetOption CpuImage ColorMatrix2 "0;1;0;0;0"][!SetOption CpuImage ColorMatrix3 "0;0;(1-(1-[CpuUsage]/100)**2);0;0"][!SetOption CpuImage ColorMatrix5 "(0.125*[CpuUsage]/100);(0.125*[CpuUsage]/100);(0.125*[CpuUsage]/100);0;1"]

[CpuRAM]
Measure=PhysicalMemory

[CpuSwap]
Measure=SWAPMemory

; Northbridge

[NorthBridgeTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-Enhanced-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-Enhanced-SensorInstance#
HWiNFOEntryId=#HWiNFO-IA-Enhanced-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode# = 1) && (NorthBridgeTemp > #CPU_NormTemp#)
IfTrueAction=[!SetOption NorthBridgeImage ColorMatrix1 "(([NorthBridgeTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption NorthBridgeImage ColorMatrix2 "0;(1-([NorthBridgeTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"]
IfCondition2=(#CPU_Mode# = 1) && (NorthBridgeTemp <= #CPU_NormTemp#)
IfTrueAction2=[!SetOption NorthBridgeImage ColorMatrix1 "0;0;0;0;0"][!SetOption NorthBridgeImage ColorMatrix2 "0;1;0;0;0"]
IfCondition3=(#CPU_Mode# = 3) && (NorthBridgeTemp > #CPU_NormTemp#)
IfTrueAction3=[!SetOption NorthBridgeImage ColorMatrix1 "(([NorthBridgeTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption NorthBridgeImage ColorMatrix2 "0;(1-([NorthBridgeTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"][!SetOption NorthBridgeImage ColorMatrix3 "0;0;(1-(1-[CpuUsage]/100)**2);0;0"][!SetOption NorthBridgeImage ColorMatrix5 "(0.125*[CpuUsage]/100);(0.125*[CpuUsage]/100);(0.125*[CpuUsage]/100);0;1"]
IfCondition4=(#CPU_Mode# = 3) && (NorthBridgeTemp <= #CPU_NormTemp#)
IfTrueAction4=[!SetOption NorthBridgeImage ColorMatrix1 "0;0;0;0;0"][!SetOption NorthBridgeImage ColorMatrix2 "0;1;0;0;0"][!SetOption NorthBridgeImage ColorMatrix3 "0;0;(1-(1-[CpuUsage]/100)**2);0;0"][!SetOption NorthBridgeImage ColorMatrix5 "(0.125*[CpuUsage]/100);(0.125*[CpuUsage]/100);(0.125*[CpuUsage]/100);0;1"]

; Ringbus Interconnect

[RingThrottle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Ring-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=1

[RingUsage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=3
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=#CPU_Mode# = 2
IfTrueAction=[!SetOption RingImage ColorMatrix1 "(1-(1-[RingUsage]/100)**2);0;0;0;0"][!SetOption RingImage ColorMatrix2 "0;(1-(1-[RingUsage]/100)**2);0;0;0"][!SetOption RingImage ColorMatrix3 "0;0;(1-(1-[RingUsage]/100)**2);0;0"]

[RingTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU-DTS-CoreMax#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode# = 1) && (RingTemp > #CPU_NormTemp#)
IfTrueAction=[!SetOption RingImage ColorMatrix1 "(([RingTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption RingImage ColorMatrix2 "0;(1-([RingTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"]
IfCondition2=(#CPU_Mode# = 1) && (RingTemp <= #CPU_NormTemp#)
IfTrueAction2=[!SetOption RingImage ColorMatrix1 "0;0;0;0;0"][!SetOption RingImage ColorMatrix2 "0;1;0;0;0"]
IfCondition3=(#CPU_Mode# = 3) && (RingTemp > #CPU_NormTemp#)
IfTrueAction3=[!SetOption RingImage ColorMatrix1 "(([RingTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption RingImage ColorMatrix2 "0;(1-([RingTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"][!SetOption RingImage ColorMatrix3 "0;0;(1-(1-[RingUsage]/100)**2);0;0"][!SetOption RingImage ColorMatrix5 "(0.125*[RingUsage]/100);(0.125*[RingUsage]/100);(0.125*[RingUsage]/100);0;1"]
IfCondition4=(#CPU_Mode# = 3) && (RingTemp <= #CPU_NormTemp#)
IfTrueAction4=[!SetOption RingImage ColorMatrix1 "0;0;0;0;0"][!SetOption RingImage ColorMatrix2 "0;1;0;0;0"][!SetOption RingImage ColorMatrix3 "0;0;(1-(1-[RingUsage]/100)**2);0;0"][!SetOption RingImage ColorMatrix5 "(0.125*[RingUsage]/100);(0.125*[RingUsage]/100);(0.125*[RingUsage]/100);0;1"]

; Integrated Graphics

[IGUsage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-Enhanced-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-Enhanced-SensorInstance#
HWiNFOEntryId=#HWiNFO-GT-Enhanced-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=#CPU_Mode# = 2
IfTrueAction=[!SetOption IGImage ColorMatrix1 "(1-(1-[IGUsage]/100)**2);0;0;0;0"][!SetOption IGImage ColorMatrix2 "0;(1-(1-[IGUsage]/100)**2);0;0;0"][!SetOption IGImage ColorMatrix3 "0;0;(1-(1-[IGUsage]/100)**2);0;0"]

[IGTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-Enhanced-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-Enhanced-SensorInstance#
HWiNFOEntryId=#HWiNFO-IG-Enhanced-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode# = 1) && (IGTemp > #CPU_NormTemp#)
IfTrueAction=[!SetOption IGImage ColorMatrix1 "(([IGTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption IGImage ColorMatrix2 "0;(1-([IGTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"]
IfCondition2=(#CPU_Mode# = 1) && (IGTemp <= #CPU_NormTemp#)
IfTrueAction2=[!SetOption IGImage ColorMatrix1 "0;0;0;0;0"][!SetOption IGImage ColorMatrix2 "0;1;0;0;0"]
IfCondition3=(#CPU_Mode# = 3) && (IGTemp > #CPU_NormTemp#)
IfTrueAction3=[!SetOption IGImage ColorMatrix1 "(([IGTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0;0"][!SetOption IGImage ColorMatrix2 "0;(1-([IGTemp]-[#CPU_NormTemp])/[#CPU_TempRange]);0;0;0"][!SetOption IGImage ColorMatrix3 "0;0;(1-(1-[IGUsage]/100)**2);0;0"][!SetOption IGImage ColorMatrix5 "(0.125*[IGUsage]/100);(0.125*[IGUsage]/100);(0.125*[IGUsage]/100);0;1"]
IfCondition4=(#CPU_Mode# = 3) && (IGTemp <= #CPU_NormTemp#)
IfTrueAction4=[!SetOption IGImage ColorMatrix1 "0;0;0;0;0"][!SetOption IGImage ColorMatrix2 "0;1;0;0;0"][!SetOption IGImage ColorMatrix3 "0;0;(1-(1-[IGUsage]/100)**2);0;0"][!SetOption IGImage ColorMatrix5 "(0.125*[IGUsage]/100);(0.125*[IGUsage]/100);(0.125*[IGUsage]/100);0;1"]

; -------------------------------------- Image -------------------------------------------

[CpuImage]
Meter=Image
ImageName=#@#Images\cpu.png
X=0
Y=0
H=#dispY#
MeterStyle=CometImageStyle#Cpu_Mode#
LeftMouseUpAction=[!ToggleMeterGroup CPU][!Redraw]
ToolTipTitle=CPU
ToolTipType=0
ToolTipText=[CpuTemp]°C

[NorthBridgeImage]
Meter=Image
ImageName=#@#Images\northbridge.png
X=(4*#scaleX#+1)
Y=(20*#scaleY#)
H=(213*#scaleY#+2)
MeterStyle=CometImageStyle#Cpu_Mode#
LeftMouseUpAction=[!ToggleGroup Disks][!Redraw]
ToolTipTitle=Northbridge
ToolTipType=0
ToolTipText=[NorthBridgeTemp]°C#CRLF#Click for Disks

[RingImage]
Meter=Image
ImageName=#@#Images\ring.png
X=(65*#scaleX#)
Y=(115*#scaleY#+1)
H=(26*#scaleY#+1)
MeterStyle=CometImageStyle#Cpu_Mode#
LeftMouseDoubleClickAction=["C:\Program Files\Intel\Intel(R) Extreme Tuning Utility\Client\XtuUILauncher.exe"]
ToolTipTitle=Ringbus Interconnect
ToolTipType=0
ToolTipText=[RingTemp]°C

[IGImage]
Meter=Image
ImageName=#@#Images\ig.png
X=(431*#scaleX#)
Y=(21*#scaleY#)
H=(214*#scaleY#+1)
MeterStyle=CometImageStyle#Cpu_Mode#
LeftMouseUpAction=[!ToggleGroup GPUs][!Redraw]
LeftMouseDoubleClickAction=["C:\Program Files (x86)\MSI Afterburner\MSIAfterburner.exe"]
ToolTipTitle=Integrated Graphics
ToolTipType=0
ToolTipText=[IGTemp]°C#CRLF#Click for GPUs

; Cores
@IncludeImageCore1=Core1.inc
@IncludeImageCore3=Core3.inc
@IncludeImageCore5=Core5.inc
@IncludeImageCore7=Core7.inc
@IncludeImageCore9=Core9.inc
@IncludeImageCore0=Core0.inc
@IncludeImageCore2=Core2.inc
@IncludeImageCore4=Core4.inc
@IncludeImageCore6=Core6.inc
@IncludeImageCore8=Core8.inc