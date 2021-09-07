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
IfCondition=(#CPU_Mode#=1) && (Core2Temp > #CPU_NormTemp#)
IfTrueAction=!SetOption Core2Image ImageTint "(#Comet_Brightness#*(([Core2Temp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), (#Comet_Brightness#*(1-([Core2Temp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), 0, #Comet_Transparency#"
IfCondition2=(#CPU_Mode#=1) && (Core2Temp <= #CPU_NormTemp#)
IfTrueAction2=!SetOption Core2Image ImageTint "0, #Comet_Brightness#, 0, #Comet_Transparency#"

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
Formula=Core2T0Usage+Core2T1Usage

IfConditionMode=1
IfCondition=#CPU_Mode#=2
IfTrueAction=!SetOption Core2Image ImageTint "(#Comet_Brightness#*([Core2Usage]-100)/100), (#Comet_Brightness#*([Core2Usage]-100)/100), (#Comet_Brightness#*([Core2Usage]-100)/100), #Comet_Transparency#"

; -------------------------------------- Image -------------------------------------------

[Core2Image]
Meter=Image
ImageName=#@#Images\core8.png
X=(147*#scaleX#)
Y=(141*#scaleY#)
H=(92*#scaleY#+2)
Grayscale=#Comet_Grayscale#
LeftMouseUpAction=[!ToggleMeterGroup Core2][!Redraw]
LeftMouseDoubleClickAction=["C:\Program Files\Intel\Intel(R) Extreme Tuning Utility\Client\XtuUILauncher.exe"]
ToolTipTitle=Core 2
ToolTipType=0
ToolTipText=[Core2Temp]°C