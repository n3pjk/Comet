[Core4Throttle]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core4-DTS-Throttle#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=1

[Core4Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core4-DTS-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=1
MinValue=0
MaxValue=100

IfConditionMode=1
IfCondition=(#CPU_Mode#=1) && (Core4Temp > #CPU_NormTemp#)
IfTrueAction=!SetOption Core4Image ImageTint "(#Comet_Brightness#*(([Core4Temp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), (#Comet_Brightness#*(1-([Core4Temp]-#CPU_NormTemp#)/(#CPU_MaxTemp#-#CPU_NormTemp#))), 0, #Comet_Transparency#"
IfCondition2=(#CPU_Mode#=1) && (Core4Temp <= #CPU_NormTemp#)
IfTrueAction2=!SetOption Core4Image ImageTint "0, #Comet_Brightness#, 0, #Comet_Transparency#"

[Core4T0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core4-T0-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core4T1Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU-SensorInstance#
HWiNFOEntryId=#HWiNFO-Core4-T1-Usage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
MinValue=0
MaxValue=100

[Core4Usage]
Measure=Calc
Formula=Core4T0Usage+Core4T1Usage

IfConditionMode=1
IfCondition=#CPU_Mode#=2
IfTrueAction=!SetOption Core4Image ImageTint "(#Comet_Brightness#*([Core4Usage]-100)/100), (#Comet_Brightness#*([Core4Usage]-100)/100), (#Comet_Brightness#*([Core4Usage]-100)/100), #Comet_Transparency#"

; -------------------------------------- Image -------------------------------------------

[Core4Image]
Meter=Image
ImageName=#@#Images\core8.png
X=(220*#scaleX#)
Y=(141*#scaleY#)
H=(92*#scaleY#+2)
Grayscale=#Comet_Grayscale#
LeftMouseUpAction=[!ToggleMeterGroup Core4][!Redraw]
LeftMouseDoubleClickAction=["C:\Program Files\Intel\Intel(R) Extreme Tuning Utility\Client\XtuUILauncher.exe"]
ToolTipTitle=Core 4
ToolTipType=0
ToolTipText=[Core4Temp]°C