[Variables]

; Modes
; 0 = Off
; 1 = Thermal
; 2 = Usage
; 3 = Both
CPU_Mode=1
DisableUpdateNag=0
CPU_MaxTemp=100
CPU_TvbTemp=70
CPU_NormTemp=40
CPU_TempRange=60
GRTemp=40

; Image scaling
imgX=574
imgY=240
aspect=#imgX#/#imgY#
dispY=100
dispX=#dispY#*#aspect#
scaleX=#dispX#/#imgX#
scaleY=#dispY#/#imgY#

; Colors
Comet_MinUsage=0.099;0.177;0.033;0;1
Comet_Brightness=255
Comet_Transparency=1
Comet_Green=0, 160, 0, (#Comet_Transparency#*255)
Comet_Red=176, 0, 0, (#Comet_Transparency#*255)
Comet_Blue=0, 0, 255, (#Comet_Transparency#*255)
Comet_Cyan=0, 180, 250, (#Comet_Transparency#*255)
Comet_Grey=100, 100, 100, (#Comet_Transparency#*255)
Comet_DarkGrey=17, 20, 22, 0

Column1=80
Column2=130
Column3=180

; -------------------------------------- styles ------------------------------------------

[CometImageStyle0]
ColorMatrix1=0.17;0.17;0.17;0;0
ColorMatrix2=0.3;0.3;0.3;0;0
ColorMatrix3=0.1;0.1;0.1;0;0
ColorMatrix4=0;0;0;(#Comet_Transparency#);0

[CometImageStyle1]
ColorMatrix1=0.33;0.33;0.33;0;0
ColorMatrix1=0.59;0.59;0.59;0;0
ColorMatrix3=0.11;0.11;0.11;0;0
ColorMatrix4=0;0;0;(#Comet_Transparency#);0

[CometImageStyle2]
ColorMatrix1=1;0;0;0;0
ColorMatrix1=0;1;0;0;0
ColorMatrix3=0;0;1;0;0
ColorMatrix4=0;0;0;(#Comet_Transparency#);0
ColorMatrix5=0.075;0.075;0.075;0;1

[CometImageStyle3]
ColorMatrix1=0.33;0.33;0.33;0;0
ColorMatrix1=0.59;0.59;0.59;0;0
ColorMatrix3=0.11;0.11;0.11;0;0
ColorMatrix4=0;0;0;(#Comet_Transparency#);0

[CometLabelStyle]
FontColor=#Comet_Grey#
FontFace=Arial
FontSize=8
AntiAlias=1

[CometValueStyle]
FontColor=#Comet_Cyan#
FontFace=Arial
FontSize=8
AntiAlias=1

[CometGraphStyle]
LineColor=#Comet_Cyan#
LineColor2=#Comet_Red#
LineColor3=#Comet_Green#
LineColor4=#Comet_Blue#
PrimaryColor=#Comet_Cyan#
SolidColor=#Comet_DarkGrey#
W=240
H=45
AntiAlias=1

[CometGPUGraphStyle]
LineColor=#Comet_Green#
LineColor2=#Comet_Red#
LineColor3=#Comet_Cyan#
LineColor4=#Comet_Blue#
PrimaryColor=#Comet_Cyan#
SolidColor=#Comet_DarkGrey#
W=240
H=45
AntiAlias=1

[CometHeaderStyle]
FontFace=Tele-Marines
FontColor=#Comet_Cyan#
FontSize=8
StringStyle=BOLD
