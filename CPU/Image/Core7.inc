[Core7Throttle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core7-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=1

[Core7Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core7-DTS-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode#=1) && (Core7Temp > #CPU_NormTemp#)
IfTrueAction=!SetOption Core7Image ImageTint "(#Comet_Brightness#*(([Core7Temp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), (#Comet_Brightness#*(1-([Core7Temp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), 0, #Comet_Transparency#"
IfCondition2=(#CPU_Mode#=1) && (Core7Temp <= #CPU_NormTemp#)
IfTrueAction2=!SetOption Core7Image ImageTint "0, #Comet_Brightness#, 0, #Comet_Transparency#"

[Core7T0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core7-T0-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core7T1Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core7-T1-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core7Usage]
Measure=Calc
Formula=Core7T0Usage+Core7T1Usage

IfConditionMode=1
IfCondition=#CPU_Mode#=2
IfTrueAction=!SetOption Core7Image ImageTint "(#Comet_Brightness#*([Core7Usage]-100)/100), (#Comet_Brightness#*([Core7Usage]-100)/100), (#Comet_Brightness#*([Core7Usage]-100)/100), #Comet_Transparency#"

; -------------------------------------- Image -------------------------------------------

[Core7Image]
Meter=Image
ImageName=#@#Images\core9.png
X=(293*#scaleX#)
Y=(20*#scaleY#)
H=(95*#scaleY#+1)
Grayscale=#Comet_Grayscale#
LeftMouseUpAction=[!ToggleMeterGroup Core7][!Redraw]
LeftMouseDoubleClickAction=["C:\Program Files\Intel\Intel(R) Extreme Tuning Utility\Client\XtuUILauncher.exe"]
ToolTipTitle=Core 7
ToolTipType=0
ToolTipText=[Core7Temp]°C