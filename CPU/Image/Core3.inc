[Core3Throttle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core3-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=1

[Core3Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core3-DTS-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode#=1) && (Core3Temp > #CPU_NormTemp#)
IfTrueAction=!SetOption Core3Image ImageTint "(#Comet_Brightness#*(([Core3Temp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), (#Comet_Brightness#*(1-([Core3Temp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), 0, #Comet_Transparency#"
IfCondition2=(#CPU_Mode#=1) && (Core3Temp <= #CPU_NormTemp#)
IfTrueAction2=!SetOption Core3Image ImageTint "0, #Comet_Brightness#, 0, #Comet_Transparency#"

[Core3T0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core3-T0-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core3T1Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core3-T1-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core3Usage]
Measure=Calc
Formula=Core3T0Usage+Core3T1Usage

IfConditionMode=1
IfCondition=#CPU_Mode#=2
IfTrueAction=!SetOption Core3Image ImageTint "(#Comet_Brightness#*([Core3Usage]-100)/100), (#Comet_Brightness#*([Core3Usage]-100)/100), (#Comet_Brightness#*([Core3Usage]-100)/100), #Comet_Transparency#"

; -------------------------------------- Image -------------------------------------------

[Core3Image]
Meter=Image
ImageName=#@#Images\core9.png
X=(147*#scaleX#)
Y=(20*#scaleY#)
H=(95*#scaleY#+2)
Grayscale=#Comet_Grayscale#
LeftMouseUpAction=[!ToggleMeterGroup Core3][!Redraw]
LeftMouseDoubleClickAction=["C:\Program Files\Intel\Intel(R) Extreme Tuning Utility\Client\XtuUILauncher.exe"]
ToolTipTitle=Core 3
ToolTipType=0
ToolTipText=[Core3Temp]°C