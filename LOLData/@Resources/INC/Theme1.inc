;====================================================================BG
[Background]
Meter=image
imagename=#@#Theme1\background.png
x=0
y=0

;====================================================================No hidden
[Summ]
Meter=image
MeasureName=Summoner_icon_Name
Path=#Summonersicon#
X=63
Y=51
w=80
h=80
MouseOverAction=[!ShowMeter "LEVEL"][!ShowMeter "LEVELSTRING"]
MouseLeaveAction=[!HideMeter "LEVEL"][!HideMeter "LEVELSTRING"]


[myname]
Meter=String
MeasureName=Player_name
x=296
y=84
FontColor=194,73,43
FontFace=#font1#
StringAlign=Center
FontSize=16
AntiAlias=1
LeftMouseUpAction=["http://x.15w.com/summoner/#temp#"]

;==========================================================================LEVEL String
[LEVEL]
Meter=Image
X=63
Y=51
w=80
h=80
SolidColor=0,0,0,185
Hidden=1


[LEVELSTRING]
Meter=String
MeasureName=Summoner_level
x=103
y=85
FontColor=255,255,255
FontFace=#font1#
StringAlign=Center
FontSize=12
Text=Lv.%1
AntiAlias=1
Hidden=1


;=========================================================================================UI BUTTON
[exitbutton]
meter=Button
ButtonImage=#@#Theme1\exit.png
x=920
y=7
LeftMouseDownAction=[Play "#@#Sound\exit1.wav"][!DeactivateConfig "LOLData\LOL" "LOLData.ini"]


[StringButton2]
meter=image
imagename=#@#Theme1\settingbu.png
x=875
y=8
ToolTipText=绑定账号
leftMouseDownAction=[!ShowMeterGroup "kk2"]


[StringButton1]
meter=image
imagename=#@#Theme1\settingbu.png
x=895
y=8
ToolTipText=关于
leftMouseDownAction=[!ShowMeterGroup "kk1"]


;===================================================================================BUTTON BACKGROUND
[button01BG]
Meter=Image
Imagename=#@#Theme1\bubg.png
x=31
y=172
Group=ga


[button02BG]
Meter=Image
Imagename=#@#Theme1\bubg.png
x=256
y=172
hidden=1
Group=gb


[button03BG]
Meter=Image
Imagename=#@#Theme1\bubg.png
x=480
y=172
Hidden=1
Group=gc


[button04BG]
Meter=Image
Imagename=#@#Theme1\bubg.png
x=703
y=172
Hidden=1
Group=gd


;===================================================================================BUTTON 1~4
[button01]
Meter=Image
ImageName=#@#Theme1\bu1.png
x=31
y=171
LeftMouseDownAction=[Play "#@#Sound\BuMusic.wav"][!ShowMeterGroup "ga"][!RedrawGroup "ga"][!HideMeterGroup "gb"][!RedrawGroup "gb"][!HideMeterGroup "gc"][!RedrawGroup "gc"][!HideMeterGroup "gd"][!RedrawGroup "gd"][!HideMeterGroup "kid"][!RedrawGroup "kid"][!HideMeterGroup "ra"][!HideMeterGroup "rb"][!HideMeterGroup "rc"]

[button02]
Meter=Image
ImageName=#@#Theme1\bu2.png
x=257
y=171
LeftMouseDownAction=[Play "#@#Sound\BuMusic.wav"][!ShowMeterGroup "gb"][!RedrawGroup "gb"][!HideMeterGroup "ga"][!RedrawGroup "ga"][!HideMeterGroup "gc"][!RedrawGroup "gc"][!HideMeterGroup "gd"][!RedrawGroup "gd"][!HideMeterGroup "kid"][!RedrawGroup "kid"][!HideMeterGroup "ra"][!HideMeterGroup "rb"][!HideMeterGroup "rc"]


[button03]
Meter=Image
ImageName=#@#Theme1\bu3.png
x=480
y=173
LeftMouseDownAction=[Play "#@#Sound\BuMusic.wav"][!ShowMeterGroup "gc"][!RedrawGroup "gc"][!HideMeterGroup "gb"][!RedrawGroup "gb"][!HideMeterGroup "ga"][!RedrawGroup "ga"][!HideMeterGroup "gd"][!RedrawGroup "gd"][!HideMeterGroup "kid"][!RedrawGroup "kid"][!HideMeterGroup "ra"][!HideMeterGroup "rb"][!HideMeterGroup "rc"]


[button04]
Meter=Image
ImageName=#@#Theme1\bu4.png
x=705
y=173
LeftMouseDownAction=[Play "#@#Sound\BuMusic.wav"][!ShowMeterGroup "gd"][!RedrawGroup "gd"][!HideMeterGroup "gb"][!RedrawGroup "gb"][!HideMeterGroup "gc"][!RedrawGroup "gc"][!HideMeterGroup "ga"][!RedrawGroup "ga"][!ShowMeterGroup "kid"][!RedrawGroup "kid"]



;====================================================================Group GA
;=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Group GA jingdian
[pwerString]
meter=String
x=640
y=89
text=战斗力
FontColor=255,255,255,210
FontFace=#font1#
StringAlign=left
FontSize=10
AntiAlias=1
Group=ga

[PlayerPower]
Meter=String
MeasureName=Power
x=745
y=81
FontColor=255,255,255
FontFace=#font1#
StringAlign=Center
FontSize=20
AntiAlias=1
Group=ga

[GroupAG_BG]
Meter=Image
ImageName=#@#Theme1\bu1contents.png
x=18
y=225
Group=ga

[jingdian]
Meter=String
MeasureName=Jingdian_sum
x=259
y=286
MeterStyle=Textstyle
Group=ga

[winchang]
Meter=String
MeasureName=Jingdian_win
x=386
y=286
MeterStyle=Textstyle
Group=ga

[jingdianlosechang]
Meter=String
MeasureName=Jingdian_lose
x=503
y=286
MeterStyle=Textstyle
Group=ga

[Redline]
Meter=BAR
MeasureName=Jingdian_shenglv
BarImage=#@#Theme1\redline.png
X=597
Y=291
BarOrientation=Horizontal
AntiAlias=1
Group=ga

[jingdiandisshenglv]
Meter=String
MeasureName=Jingdian_win_odd
x=810
y=286
FontFace=锐字逼格青春体简2.0
FontSize=14
FontColor=255,255,255,230
AntiAlias=1
StringAlign=left
text=%1%
Group=ga

;=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=Group GA S5
[S5zong]
Meter=String
MeasureName=S5dan_sum
x=259
y=328
MeterStyle=Textstyle
Group=ga


[S5winchang]
Meter=String
MeasureName=S5dan_win
x=386
y=328
MeterStyle=Textstyle
Group=ga

[S5losechang]
Meter=String
MeasureName=S5dan_lose
x=503
y=328
MeterStyle=Textstyle
Group=ga


[Blueline]
Meter=BAR
MeasureName=S5dan_win_shenglv
BarImage=#@#Theme1\blueline.png
X=597
Y=333
BarOrientation=Horizontal
AntiAlias=1
Group=ga

[S5disshenglv]
Meter=String
MeasureName=S5dan_win_odd
x=810
y=328
FontFace=锐字逼格青春体简2.0
FontSize=14
FontColor=255,255,255,230
AntiAlias=1
StringAlign=left
text=%1%
Group=ga

;=============================================================Group GA S4

[S4zong]
Meter=String
MeasureName=S4dan_sum
x=259
y=370
MeterStyle=Textstyle
Group=ga

[S4winchang]
Meter=String
MeasureName=S4dan_win
x=386
y=370
MeterStyle=Textstyle
Group=ga

[S4losechang]
Meter=String
MeasureName=S4dan_lose
x=503
y=370
MeterStyle=Textstyle
Group=ga

[greenline]
Meter=BAR
MeasureName=S4dan_win_shenglv
BarImage=#@#Theme1\greenblue.png
X=597
Y=375
BarOrientation=Horizontal
AntiAlias=1
Group=ga

[S4disshenglv]
Meter=String
MeasureName=S4dan_win_odd
x=810
y=370
FontFace=锐字逼格青春体简2.0
FontSize=14
FontColor=255,255,255,230
AntiAlias=1
StringAlign=left
text=%1%
Group=ga

;===============================================S4 Dan point and leve name
[DISS4point]
meter=String
MeasureName=S4dan_point
x=141
y=529
FontFace=锐字逼格青春体简2.0
FontSize=20
FontColor=199,37,41,230
AntiAlias=1
StringAlign=Center
Group=ga

[DISS4level]
meter=String
MeasureName=S4dan_level_name
x=145
y=606
FontFace=锐字逼格青春体简2.0
FontSize=16
FontColor=30,84,149,230
AntiAlias=1
StringAlign=Center
Group=ga
;===============================================S5 Dan point and leve name
[DISS5point]
meter=String
MeasureName=S5dan_point
x=450
y=529
FontFace=锐字逼格青春体简2.0
FontSize=20
FontColor=199,37,41,230
AntiAlias=1
StringAlign=Center
Group=ga


[DISS5level]
meter=String
MeasureName=S5dan_level_name
x=454
y=606
FontFace=锐字逼格青春体简2.0
FontSize=16
FontColor=30,84,149,230
AntiAlias=1
StringAlign=Center
Group=ga


;=========================================================S5 Dan Icon
[DISS5Danicon]
Meter=Image
MeasureName=Dan_icon_name
Path=#danicon#
X=688
Y=455
Group=ga

;=======================================server name
[ServernameDIS]
Meter=String
MeasureName=Server_name
x=762
y=615
FontFace=锐字逼格青春体简2.0
FontSize=10
FontColor=255,255,255,200
AntiAlias=1
StringAlign=Center
Group=ga

;\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
;==================================================================Group GB
[GroupGBgb]
Meter=image
ImageName=#@#Theme1\bu2contents.png
x=19
y=245
Hidden=1
Group=gb

[AvgString]
meter=String
x=640
y=89
text=平均胜率
FontColor=255,255,255,210
FontFace=#font1#
StringAlign=left
FontSize=10
AntiAlias=1
Hidden=1
Group=gb

[AvgHeroWinodd]
Meter=String
MeasureName=avg_hero_win_odd
x=754
y=81
FontColor=255,255,255
FontFace=#font1#
StringAlign=Center
FontSize=20
AntiAlias=1
Text=%1%
Hidden=1
Group=gb

;==========================HERO1
[Hero1icon]
Meter=Image
MeasureName=hero1_icon_name
Path=#heroicon#
x=40
y=284
w=64
h=64
Hidden=1
Group=gb

[Hero1sumchang]
Meter=String
MeasureName=hero1_sum
x=145
y=306
MeterStyle=sumtext
Hidden=1
Group=gb

[Hero1winchang]
Meter=String
MeasureName=hero1_win
x=250
y=308
MeterStyle=wintext
Hidden=1
Group=gb

[Hero1winodd]
Meter=String
MeasureName=hero1_win_odd
x=357
y=306
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb

;=========================HERO2
[Hero2icon]
Meter=Image
MeasureName=hero2_icon_name
Path=#heroicon#
x=40
y=351
w=64
h=64
Hidden=1
Group=gb

[Hero2sumchang]
Meter=String
MeasureName=hero2_sum
x=145
y=374
MeterStyle=sumtext
Hidden=1
Group=gb

[Hero2winchang]
Meter=String
MeasureName=hero2_win
x=250
y=376
MeterStyle=wintext
Hidden=1
Group=gb

[Hero2winodd]
Meter=String
MeasureName=hero2_win_odd
x=357
y=374
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb

;=========================HERO3
[Hero3icon]
Meter=Image
MeasureName=hero3_icon_name
Path=#heroicon#
x=40
y=419
w=64
h=64
Hidden=1
Group=gb

[Hero3sumchang]
Meter=String
MeasureName=hero3_sum
x=145
y=442
MeterStyle=sumtext
Hidden=1
Group=gb

[Hero3winchang]
Meter=String
MeasureName=hero3_win
x=250
y=444
MeterStyle=wintext
Hidden=1
Group=gb

[Hero3winodd]
Meter=String
MeasureName=hero3_win_odd
x=357
y=442
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb

;=========================HERO4
[Hero4icon]
Meter=Image
MeasureName=hero4_icon_name
Path=#heroicon#
x=40
y=488
w=64
h=64
Hidden=1
Group=gb

[Hero4sumchang]
Meter=String
MeasureName=hero4_sum
x=145
y=510
MeterStyle=sumtext
Hidden=1
Group=gb

[Hero4winchang]
Meter=String
MeasureName=hero4_win
x=250
y=512
MeterStyle=wintext
Hidden=1
Group=gb

[Hero4winodd]
Meter=String
MeasureName=hero4_win_odd
x=357
y=510
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb

;========================HERO5
[Hero5icon]
Meter=Image
MeasureName=hero5_icon_name
Path=#heroicon#
x=40
y=557
w=64
h=64
Hidden=1
Group=gb

[Hero5sumchang]
Meter=String
MeasureName=hero5_sum
x=145
y=579
MeterStyle=sumtext
Hidden=1
Group=gb

[Hero5winchang]
Meter=String
MeasureName=hero5_win
x=250
y=581
MeterStyle=wintext
Hidden=1
Group=gb

[Hero5winodd]
Meter=String
MeasureName=hero5_win_odd
x=357
y=579
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb

;============================HERO6
[Hero6icon]
Meter=Image
MeasureName=hero6_icon_name
Path=#heroicon#
x=851
y=284
w=64
h=64
Hidden=1
Group=gb

[Hero6sumchang]
Meter=String
MeasureName=hero6_sum
x=810
y=306
MeterStyle=sumtextright
Hidden=1
Group=gb

[Hero6winchang]
Meter=String
MeasureName=hero6_win
x=710
y=308
MeterStyle=wintextright
Hidden=1
Group=gb

[Hero6winodd]
Meter=String
MeasureName=hero6_win_odd
x=538
y=306
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb

;============================Hero7
[Hero7icon]
Meter=Image
MeasureName=hero7_icon_name
Path=#heroicon#
x=851
y=351
w=64
h=64
Hidden=1
Group=gb

[Hero7sumchang]
Meter=String
MeasureName=hero7_sum
x=810
y=374
MeterStyle=sumtextright
Hidden=1
Group=gb

[Hero7winchang]
Meter=String
MeasureName=hero7_win
x=710
y=376
MeterStyle=wintextright
Hidden=1
Group=gb

[Hero7winodd]
Meter=String
MeasureName=hero7_win_odd
x=538
y=374
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb


;=============================hero8
[Hero8icon]
Meter=Image
MeasureName=hero8_icon_name
Path=#heroicon#
x=851
y=419
w=64
h=64
Hidden=1
Group=gb

[Hero8sumchang]
Meter=String
MeasureName=hero8_sum
x=810
y=442
MeterStyle=sumtextright
Hidden=1
Group=gb

[Hero8winchang]
Meter=String
MeasureName=hero8_win
x=710
y=444
MeterStyle=wintextright
Hidden=1
Group=gb

[Hero8winodd]
Meter=String
MeasureName=hero8_win_odd
x=538
y=442
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb

;=========================HERO9
[Hero9icon]
Meter=Image
MeasureName=hero9_icon_name
Path=#heroicon#
x=851
y=488
w=64
h=64
Hidden=1
Group=gb

[Hero9sumchang]
Meter=String
MeasureName=hero9_sum
x=810
y=510
MeterStyle=sumtextright
Hidden=1
Group=gb

[Hero9winchang]
Meter=String
MeasureName=hero9_win
x=710
y=512
MeterStyle=wintextright
Hidden=1
Group=gb

[Hero9winodd]
Meter=String
MeasureName=hero9_win_odd
x=538
y=510
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb

;=============================HERO10
[Hero10icon]
Meter=Image
MeasureName=hero10_icon_name
Path=#heroicon#
x=851
y=557
w=64
h=64
Hidden=1
Group=gb

[Hero10sumchang]
Meter=String
MeasureName=hero10_sum
x=810
y=579
MeterStyle=sumtextright
Hidden=1
Group=gb

[Hero10winchang]
Meter=String
MeasureName=hero10_win
x=710
y=581
MeterStyle=wintextright
Hidden=1
Group=gb

[Hero10winodd]
Meter=String
MeasureName=hero10_win_odd
x=538
y=579
MeterStyle=oddtext
text=%1%
Hidden=1
Group=gb

;===========================================more
[morestring]
Meter=String
x=40
y=644
FontSize=10
FontFace=锐字逼格青春体简2.0
FontColor=255,255,225,155
AntiAlias=1
Text=MORE . . .
StringAlign=left
Hidden=1
Group=gb
LeftMouseDownAction=["http://x.15w.com/champions/#temp#"]



;=======================================================================bu3 Centents GC
[Bu3Backgruond]
meter=Image
Imagename=#@#Theme1\bu3contents.png
x=19
y=293
Hidden=1
Group=gc


[KDAString]
meter=String
x=640
y=89
text=场均KDA
FontColor=255,255,255,210
FontFace=#font1#
StringAlign=left
FontSize=10
AntiAlias=1
Hidden=1
Group=gc

[DISKADstring]
Meter=String
MeasureName=kda
x=750
y=81
FontColor=255,255,255
FontFace=#font1#
StringAlign=Center
FontSize=20
AntiAlias=1
Hidden=1
Group=gc
NumOfDecimals=1

;==============================war1
[war1modelString]
Meter=String
MeasureName=war1_mod
x=128
y=243
MeterStyle=warmodtext
Hidden=1
Group=gc

[war1time]
Meter=String
MeasureName=war1_time
MeterStyle=wartimetext
x=100
y=273
Hidden=1
Group=gc

[war1icon]
Meter=Image
MeasureName=war1_icon
Path=#heroicon#
x=250
y=227
w=68
H=68
Hidden=1
Group=gc

[war1iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=250
y=227
w=68
H=68
Hidden=1
Group=gc

[war1shengfu]
Meter=Image
MeasureName=war1_outcome
Path=#@#Theme1\
x=370
y=252
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war1_url]"]




;===================================war2
[war2modelString]
Meter=String
MeasureName=war2_mod
x=128
y=323
MeterStyle=warmodtext
Hidden=1
Group=gc

[war2time]
Meter=String
MeasureName=war2_time
MeterStyle=wartimetext
x=100
y=353
Hidden=1
Group=gc

[war2icon]
Meter=Image
MeasureName=war2_icon
Path=#heroicon#
x=250
y=308
w=68
H=68
Hidden=1
Group=gc

[war2iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=250
y=308
w=68
H=68
Hidden=1
Group=gc

[war2shengfu]
Meter=Image
MeasureName=war2_outcome
Path=#@#Theme1\
x=370
y=333
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war2_url]"]

;===================================war3
[war3modelString]
Meter=String
MeasureName=war3_mod
x=128
y=405
MeterStyle=warmodtext
Hidden=1
Group=gc

[war3time]
Meter=String
MeasureName=war3_time
MeterStyle=wartimetext
x=100
y=435
Hidden=1
Group=gc

[war3icon]
Meter=Image
MeasureName=war3_icon
Path=#heroicon#
x=250
y=391
w=68
H=68
Hidden=1
Group=gc

[war3iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=250
y=391
w=68
H=68
Hidden=1
Group=gc

[war3shengfu]
Meter=Image
MeasureName=war3_outcome
Path=#@#Theme1\
x=370
y=416
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war3_url]"]

;===================================war4
[war4modelString]
Meter=String
MeasureName=war4_mod
x=128
y=487
MeterStyle=warmodtext
Hidden=1
Group=gc

[war4time]
Meter=String
MeasureName=war4_time
MeterStyle=wartimetext
x=100
y=517
Hidden=1
Group=gc

[war4icon]
Meter=Image
MeasureName=war4_icon
Path=#heroicon#
x=250
y=475
w=68
H=68
Hidden=1
Group=gc

[war4iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=250
y=475
w=68
H=68
Hidden=1
Group=gc

[war4shengfu]
Meter=Image
MeasureName=war4_outcome
Path=#@#Theme1\
x=370
y=498
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war4_url]"]

;===================================war5
[war5modelString]
Meter=String
MeasureName=war5_mod
x=128
y=569
MeterStyle=warmodtext
Hidden=1
Group=gc

[war5time]
Meter=String
MeasureName=war5_time
MeterStyle=wartimetext
x=100
y=599
Hidden=1
Group=gc

[war5icon]
Meter=Image
MeasureName=war5_icon
Path=#heroicon#
x=250
y=557
w=68
H=68
Hidden=1
Group=gc

[war5iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=250
y=557
w=68
H=68
Hidden=1
Group=gc

[war5shengfu]
Meter=Image
MeasureName=war5_outcome
Path=#@#Theme1\
x=370
y=581
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war5_url]"]

;==============================war6
[war6modelString]
Meter=String
MeasureName=war6_mod
x=765
y=243
MeterStyle=warmodtext
Hidden=1
Group=gc

[war6time]
Meter=String
MeasureName=war6_time
MeterStyle=wartimetext
x=740
y=273
Hidden=1
Group=gc

[war6icon]
Meter=Image
MeasureName=war6_icon
Path=#heroicon#
x=645
y=227
w=68
H=68
Hidden=1
Group=gc

[war6iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=645
y=227
w=68
H=68
Hidden=1
Group=gc

[war6shengfu]
Meter=Image
MeasureName=war6_outcome
Path=#@#Theme1\
x=545
y=252
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war6_url]"]

;===================================war7
[war7modelString]
Meter=String
MeasureName=war7_mod
x=765
y=323
MeterStyle=warmodtext
Hidden=1
Group=gc

[war7time]
Meter=String
MeasureName=war7_time
MeterStyle=wartimetext
x=740
y=353
Hidden=1
Group=gc

[war7icon]
Meter=Image
MeasureName=war7_icon
Path=#heroicon#
x=645
y=308
w=68
H=68
Hidden=1
Group=gc

[war7iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=645
y=308
w=68
H=68
Hidden=1
Group=gc

[war7shengfu]
Meter=Image
MeasureName=war7_outcome
Path=#@#Theme1\
x=545
y=333
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war7_url]"]

;===================================war8
[war8modelString]
Meter=String
MeasureName=war8_mod
x=765
y=405
MeterStyle=warmodtext
Hidden=1
Group=gc

[war8time]
Meter=String
MeasureName=war8_time
MeterStyle=wartimetext
x=740
y=435
Hidden=1
Group=gc

[war8icon]
Meter=Image
MeasureName=war8_icon
Path=#heroicon#
x=645
y=391
w=68
H=68
Hidden=1
Group=gc

[war8iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=645
y=391
w=68
H=68
Hidden=1
Group=gc

[war8shengfu]
Meter=Image
MeasureName=war8_outcome
Path=#@#Theme1\
x=545
y=416
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war8_url]"]

;===================================war9
[war9modelString]
Meter=String
MeasureName=war9_mod
x=765
y=487
MeterStyle=warmodtext
Hidden=1
Group=gc

[war9time]
Meter=String
MeasureName=war9_time
MeterStyle=wartimetext
x=740
y=517
Hidden=1
Group=gc

[war9icon]
Meter=Image
MeasureName=war9_icon
Path=#heroicon#
x=645
y=475
w=68
H=68
Hidden=1
Group=gc

[war9iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=645
y=475
w=68
H=68
Hidden=1
Group=gc

[war9shengfu]
Meter=Image
MeasureName=war9_outcome
Path=#@#Theme1\
x=545
y=498
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war9_url]"]

;===================================war10
[war10modelString]
Meter=String
MeasureName=war10_mod
x=765
y=569
MeterStyle=warmodtext
Hidden=1
Group=gc

[war10time]
Meter=String
MeasureName=war10_time
MeterStyle=wartimetext
x=740
y=599
Hidden=1
Group=gc

[war10icon]
Meter=Image
MeasureName=war10_icon
Path=#heroicon#
x=645
y=557
w=68
H=68
Hidden=1
Group=gc

[war10iconround]
Meter=Image
Imagename=#@#Theme1\heroround.png
x=645
y=557
w=68
H=68
Hidden=1
Group=gc

[war10shengfu]
Meter=Image
MeasureName=war10_outcome
Path=#@#Theme1\
x=545
y=581
Hidden=1
Group=gc
ToolTipText=战报详情
LeftMouseDownAction=["[war10_url]"]

;================================more bu3
[bu3morestring]
Meter=String
x=457
y=647
FontSize=10
FontFace=锐字逼格青春体简2.0
FontColor=255,255,225,155
SolidColor=0,0,0,1
AntiAlias=1
Text=MORE
StringAlign=left
Hidden=1
Group=gc
LeftMouseDownAction=["http://x.15w.com/battle/#temp#"]



;-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-BU4 contents
;===================New hero
[BU4BGbg]
Meter=Image
ImageName=#@#Theme1\Free.png
x=17
y=230
Hidden=1
Group=gd

[NEWstring]
meter=String
x=630
y=89
text=NEW
FontColor=255,255,255,210
FontFace=#font1#
StringAlign=left
FontSize=10
AntiAlias=1
Hidden=1
Group=gd

[NEWhero]
Meter=String
MeasureName=NewHeroname
x=750
y=82
FontColor=255,255,255
FontFace=#font1#
StringAlign=Center
FontSize=18
AntiAlias=1
Hidden=1
Group=gd
LeftMouseDownAction=["[NewFreeHeroURL]"]

;====================================freehero1
[freehero1icon]
Meter=Image
MeasureName=freehero1down
x=360
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero1url]"]

;====================================freehero2
[freehero2icon]
Meter=Image
MeasureName=freehero2down
x=288
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero2url]"]

;====================================freehero3
[freehero3icon]
Meter=Image
MeasureName=freehero3down
x=216
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero3url]"]

;====================================freehero4
[freehero4icon]
Meter=Image
MeasureName=freehero4down
x=144
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero4url]"]

;====================================freehero5
[freehero5icon]
Meter=Image
MeasureName=freehero5down
x=72
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero5url]"]

;====================================freehero6
[freehero6icon]
Meter=Image
MeasureName=freehero6down
x=538
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero6url]"]

;====================================freehero7
[freehero7icon]
Meter=Image
MeasureName=freehero7down
x=610
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero7url]"]

;====================================freehero8
[freehero8icon]
Meter=Image
MeasureName=freehero8down
x=682
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero8url]"]

;====================================freehero9
[freehero9icon]
Meter=Image
MeasureName=freehero9down
x=754
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero9url]"]

;====================================freehero10
[freehero10icon]
Meter=Image
MeasureName=freehero10down
x=826
y=229
w=62
y=62
Hidden=1
Group=gd
LeftMouseDownAction=["[freehero10url]"]

;-=-=-=-=-==--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=RSS
[hotRSS1]
Meter=Image
MeasureName=RSSimage1
x=83
y=366
w=330
H=175
AntiAlias=1
Hidden=1
Group=gd
LeftMouseDownAction=["[RSSurl1]"]

[hotRSS2]
Meter=Image
MeasureName=RSSimage2
x=83
y=366
w=330
H=175
AntiAlias=1
Hidden=1
Group=ra
LeftMouseDownAction=["[RSSurl2]"]

[hotRSS3]
Meter=Image
MeasureName=RSSimage3
x=83
y=366
w=330
H=175
AntiAlias=1
Hidden=1
Group=rb
LeftMouseDownAction=["[RSSurl3]"]

[hotRSS4]
Meter=Image
MeasureName=RSSimage4
x=83
y=366
w=330
H=175
AntiAlias=1
Hidden=1
Group=rc
LeftMouseDownAction=["[RSSurl4]"]

;=======================================dy0
[DY1]
Meter=Image
ImageName=#@#Theme1\dy0.png
x=200
y=523
ImageAlpha=200
Hidden=1
Group=gd
LeftMouseDownAction=[!ShowMeterGroup "kid"][!HideMeterGroup "ra"][!HideMeterGroup "rb"][!HideMeterGroup "rc"]

[DY2]
Meter=Image
ImageName=#@#Theme1\dy0.png
x=228
y=523
ImageAlpha=200
Hidden=1
Group=gd
LeftMouseDownAction=[!ShowMeterGroup "ra"][!HideMeterGroup "rb"][!HideMeterGroup "rc"][!HideMeterGroup "kid"]

[DY3]
Meter=Image
ImageName=#@#Theme1\dy0.png
x=255
y=523
ImageAlpha=200
Hidden=1
Group=gd
LeftMouseDownAction=[!ShowMeterGroup "rb"][!HideMeterGroup "ra"][!HideMeterGroup "rc"][!HideMeterGroup "kid"]


[DY4]
Meter=Image
ImageName=#@#Theme1\dy0.png
x=282
y=523
ImageAlpha=200
Hidden=1
Group=gd
LeftMouseDownAction=[!ShowMeterGroup "rc"][!HideMeterGroup "ra"][!HideMeterGroup "rb"][!HideMeterGroup "kid"]

;=======================================dZ
[DZ1]
Meter=Image
ImageName=#@#Theme1\dy1.png
x=200
y=523
ImageAlpha=200
Hidden=1
Group=kid

[DZ2]
Meter=Image
ImageName=#@#Theme1\dy1.png
x=228
y=523
ImageAlpha=200
Hidden=1
Group=ra

[DZ3]
Meter=Image
ImageName=#@#Theme1\dy1.png
x=255
y=523
ImageAlpha=200
Hidden=1
Group=rb

[DZ4]
Meter=Image
ImageName=#@#Theme1\dy1.png
x=282
y=523
ImageAlpha=200
Hidden=1
Group=rc

[boximage]
Meter=Image
ImageName=#@#Theme1\box.png
x=83
y=366
w=330
H=175
AntiAlias=1
Hidden=1
Group=gd

;================================================================BU4 LPL
[lpl1leftlogo]
Meter=Image
MeasureName=lpl1_left_logo
x=550
y=365
w=40
H=40
Hidden=1
Group=gd

[lpl1leftname]
Meter=String
MeasureName=lpl1_left_name
x=610
y=375
w=80
h=20
ClipString=1
FontFace=锐字逼格青春体简2.0
FontSize=12
FontColor=63,123,235
AntiAlias=1
StringAlign=left
Hidden=1
Group=gd

[lpl1vs]
Meter=String
MeasureName=lpl1_vs
x=717
y=375
FontFace=锐字逼格青春体简2.0
FontSize=14
FontColor=255,255,255,230
AntiAlias=1
StringAlign=center
Hidden=1
Group=gd

[lpl1rightname]
Meter=String
MeasureName=lpl1_right_name
x=825
y=375
w=80
h=20
ClipString=1
FontFace=锐字逼格青春体简2.0
FontSize=12
FontColor=199,37,41,230
AntiAlias=1
StringAlign=right

Hidden=1
Group=gd

[lpl1rightlogo]
Meter=Image
MeasureName=lpl1_right_logo
x=840
y=365
w=40
H=40
Hidden=1
Group=gd

;================================================================BU4 LPL
[lpl2leftlogo]
Meter=Image
MeasureName=lpl2_left_logo
x=550
y=430
w=40
H=40
Hidden=1
Group=gd

[lpl2leftname]
Meter=String
MeasureName=lpl2_left_name
x=610
y=440
w=80
h=20
ClipString=1
FontFace=锐字逼格青春体简2.0
FontSize=12
FontColor=63,123,235
AntiAlias=1
StringAlign=left
Hidden=1
Group=gd

[lpl2vs]
Meter=String
MeasureName=lpl2_vs
x=717
y=440
FontFace=锐字逼格青春体简2.0
FontSize=14
FontColor=255,255,255,230
AntiAlias=1
StringAlign=center
Hidden=1
Group=gd

[lpl2rightname]
Meter=String
MeasureName=lpl2_right_name
x=825
y=440
w=80
h=20
ClipString=1
FontFace=锐字逼格青春体简2.0
FontSize=12
FontColor=199,37,41,230
AntiAlias=1
StringAlign=right
Hidden=1
Group=gd

[lpl2rightlogo]
Meter=Image
MeasureName=lpl2_right_logo
x=840
y=430
w=40
H=40
Hidden=1
Group=gd

;================================================================BU4 LPL
[lpl3leftlogo]
Meter=Image
MeasureName=lpl3_left_logo
x=550
y=495
w=40
H=40
Hidden=1
Group=gd

[lpl3leftname]
Meter=String
MeasureName=lpl3_left_name
x=610
y=505
w=80
h=20
ClipString=1
FontFace=锐字逼格青春体简2.0
FontSize=12
FontColor=63,123,235
AntiAlias=1
StringAlign=left
Hidden=1
Group=gd

[lpl3vs]
Meter=String
MeasureName=lpl3_vs
x=717
y=505
FontFace=锐字逼格青春体简2.0
FontSize=14
FontColor=255,255,255,230
AntiAlias=1
StringAlign=center
Hidden=1
Group=gd

[lpl3rightname]
Meter=String
MeasureName=lpl3_right_name
x=825
y=505
w=80
h=20
ClipString=1
FontFace=锐字逼格青春体简2.0
FontSize=12
FontColor=199,37,41,230
AntiAlias=1
StringAlign=right
Hidden=1
Group=gd

[lpl3rightlogo]
Meter=Image
MeasureName=lpl3_right_logo
x=840
y=495
w=40
H=40
Hidden=1
Group=gd

;=================================================palyer button
[Play1]
Meter=IMAGE
ImageName=#@#Theme1\play.png
x=510
y=375
Hidden=1
Group=gd
ToolTipText=[lpl1_time]
DynamicVariables=1
LeftMouseDownAction=["[lpl1_url]"]

[Play2]
Meter=IMAGE
ImageName=#@#Theme1\play.png
x=510
y=440
Hidden=1
Group=gd
ToolTipText=[lpl2_time]
DynamicVariables=1
LeftMouseDownAction=["[lpl2_url]"]

[Play3]
Meter=IMAGE
ImageName=#@#Theme1\play.png
x=510
y=505
Hidden=1
Group=gd
ToolTipText=[lpl3_time]
DynamicVariables=1
LeftMouseDownAction=["[lpl3_url]"]


;=================================================hero button
[herobuttom1]
Meter=Image
ImageName=#@#Theme1\herobuttom1.png
x=77
y=585
Hidden=1
group=gd
MouseOverAction=[!ShowMeter "butext1"]
MouseLeaveAction=[!HideMeter "butext1"]
LeftMouseDownAction=["http://lol.qq.com/web201310/info-heros.shtml#Navi"]


[herobuttom2]
Meter=Image
ImageName=#@#Theme1\herobuttom2.png
x=211r
y=585
Hidden=1
group=gd
MouseOverAction=[!ShowMeter "butext2"]
MouseLeaveAction=[!HideMeter "butext2"]
LeftMouseUpAction=["http://lol.qq.com/web201310/info-item.shtml#Navi"]

[herobuttom3]
Meter=Image
ImageName=#@#Theme1\herobuttom3.png
x=211r
y=585
Hidden=1
group=gd
MouseOverAction=[!ShowMeter "butext3"]
MouseLeaveAction=[!HideMeter "butext3"]
LeftMouseDownAction=["http://lol.qq.com/web201310/info-rune.shtml#Navi"]

[herobuttom4]
Meter=Image
ImageName=#@#Theme1\herobuttom4.png
x=211r
y=585
Hidden=1
group=gd
MouseOverAction=[!ShowMeter "butext4"]
MouseLeaveAction=[!HideMeter "butext4"]
LeftMouseDownAction=["http://lol.qq.com/web201310/info-talent.shtml#Navi"]


;=========================================text

[butext1]
Meter=Image
ImageName=#@#Theme1\butext1.png
x=77
y=585
Hidden=1
LeftMouseDownAction=["http://lol.qq.com/web201310/info-heros.shtml#Navi"]

[butext2]
Meter=Image
ImageName=#@#Theme1\butext2.png
x=211r
y=585
Hidden=1
LeftMouseUpAction=["http://lol.qq.com/web201310/info-item.shtml#Navi"]

[butext3]
Meter=Image
ImageName=#@#Theme1\butext3.png
x=211r
y=585
Hidden=1
LeftMouseDownAction=["http://lol.qq.com/web201310/info-rune.shtml#Navi"]

[butext4]
Meter=Image
ImageName=#@#Theme1\butext4.png
x=211r
y=585
Hidden=1
LeftMouseDownAction=["http://lol.qq.com/web201310/info-talent.shtml#Navi"]

;===============================================about Image
[aboutimage]
Meter=Image
ImageName=#@#Theme1\about.png
x=0
y=0
hidden=1
group=kk1

[emailimage]
Meter=Image
Imagename=#@#Theme1\email.png
x=677
y=477
hidden=1
group=kk1
ToolTipText=复制邮箱地址
LeftMouseDownAction=[!SetClip "kid--l@hotmail.com"]

[aboutoff]
Meter=String
text=X
fontsize=12
fontcolor=255,255,255,200
x=692
y=234
Hidden=1
group=kk1
antialias=1
leftmousedownaction=[!hidemetergroup "kk1"]


;=================================================bangding Image
[bangdingimage]
Meter=Image
ImageName=#@#Theme1\bangding.png
x=0
y=0
hidden=1
group=kk2

[15Wlianjie]
Meter=String
text=http://x.15w.com/
fontsize=13
fontcolor=0,164,224
x=220
y=237
Hidden=1
group=kk2
antialias=1
leftmousedownaction=[http://x.15w.com/]

[FontFacesB]
meter=String
FontColor=255,255,255,100
FontSize=12
AntiAlias=1
Text=黏贴后回车键应用
X=410
Y=186
hidden=1
group=kk2
Leftmousedownaction=!CommandMeasure "MeasureFaceB" "ExecuteBatch 1-2"

[MeasureFaceB]
Measure=Plugin
Plugin=InputText
FontColor=255,255,255
SolidColor=0,0,0
FontSize=12
AntiAlias=1
X=410
Y=186
H=20
w=229
hidden=1
group=kk2
DefaultValue=#temp#
Command1=!WriteKeyValue Variables temp "$UserInput$"
Command2=!Refresh


[bangdingoff]
Meter=String
text=X
fontsize=12
fontcolor=255,255,255,200
x=828
y=164
Hidden=1
group=kk2
antialias=1
leftmousedownaction=[!hidemetergroup "kk2"]