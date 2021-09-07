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
HWiNFOLogHandler=1
MinValue=0
MaxValue=1

[CpuTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU-DTS-Package#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode# = 1) && (CpuTemp > #CPU_NormTemp#)
IfTrueAction=!SetOption CpuImage ImageTint "(#Comet_Brightness#*(([CpuTemp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), (#Comet_Brightness#*(1-([CpuTemp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), 0, #Comet_Transparency#"
IfCondition2=(#CPU_Mode# = 1) && (CpuTemp <= #CPU_NormTemp#)
IfTrueAction2=!SetOption CpuImage ImageTint "0, #Comet_Brightness#, 0, #Comet_Transparency#"

[CpuUsage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

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
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode# = 1) && (NorthBridgeTemp > #CPU_NormTemp#)
IfTrueAction=!SetOption NorthBridgeImage ImageTint "(#Comet_Brightness#*(([NorthBridgeTemp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), (#Comet_Brightness#*(1-([NorthBridgeTemp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), 0, #Comet_Transparency#"
IfCondition2=(#CPU_Mode# = 1) && (NorthBridgeTemp <= #CPU_NormTemp#)
IfTrueAction2=!SetOption NorthBridgeImage ImageTint "0, #Comet_Brightness#, 0, #Comet_Transparency#"

; Ringbus Interconnect

[RingThrottle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Ring-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=1

[RingTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU-DTS-CoreMax#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode# = 1) && (RingTemp > #CPU_NormTemp#)
IfTrueAction=!SetOption RingImage ImageTint "(#Comet_Brightness#*(([RingTemp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), (#Comet_Brightness#*(1-([RingTemp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), 0, #Comet_Transparency#"
IfCondition2=(#CPU_Mode# = 1) && (RingTemp <= #CPU_NormTemp#)
IfTrueAction2=!SetOption RingImage ImageTint "0, #Comet_Brightness#, 0, #Comet_Transparency#"

; Integrated Graphics

[IGTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-Enhanced-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-Enhanced-SensorInstance#
HWiNFOEntryId=#HWiNFO-IG-Enhanced-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode# = 1) && (IGTemp > #CPU_NormTemp#)
IfTrueAction=!SetOption IGImage ImageTint "(#Comet_Brightness#*(([IGTemp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), (#Comet_Brightness#*(1-([IGTemp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), 0, #Comet_Transparency#"
IfCondition2=(#CPU_Mode# = 1) && (IGTemp <= #CPU_NormTemp#)
IfTrueAction2=!SetOption IGImage ImageTint "0, #Comet_Brightness#, 0, #Comet_Transparency#"

; -------------------------------------- Image -------------------------------------------

[CpuImage]
Meter=Image
ImageName=#@#Images\cpu.png
X=0
Y=0
H=#dispY#
Grayscale=#Comet_Grayscale#
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
Grayscale=#Comet_Grayscale#
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
Grayscale=#Comet_Grayscale#
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
Grayscale=#Comet_Grayscale#
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