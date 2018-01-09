;=================================================Duowan HERO-API

[HEROAPI]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=20000
DecodeCharacterReference=2
URL="http://x.15w.com/champions/#temp#"
RegExp="(?siU).*<thead>.*</thead>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>.*<tr><td>.*hero-ico hero-(.*)"></span>.*tip-title=".*">(.*)</a>.*<td>.*</td><td>(.*)</td><td>(.*)</td>.*tip-title=".*:(.*);">.*<td>(.*)</td>"
Debug=1

;==============================================hero1

[hero1_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=1

[hero1_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=2

[hero1_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=3

[hero1_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=4

[hero1_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=5
Substitute="%":""

[hero1_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=6

;==============================================hero2

[hero2_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=7

[hero2_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=8

[hero2_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=9

[hero2_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=10

[hero2_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=11
Substitute="%":""

[hero2_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=12

;==============================================hero3

[hero3_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=13

[hero3_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=14

[hero3_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=15

[hero3_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=16

[hero3_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=17
Substitute="%":""

[hero3_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=18

;==============================================hero4

[hero4_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=19

[hero4_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=20

[hero4_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=21

[hero4_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=22

[hero4_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=23
Substitute="%":""

[hero4_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=24

;==============================================hero5

[hero5_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=25

[hero5_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=26

[hero5_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=27

[hero5_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=28

[hero5_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=29
Substitute="%":""

[hero5_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=30

;==============================================hero6

[hero6_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=31

[hero6_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=32

[hero6_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=33

[hero6_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=34

[hero6_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=35
Substitute="%":""

[hero6_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=36

;==============================================hero7

[hero7_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=37

[hero7_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=38

[hero7_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=39

[hero7_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=40

[hero7_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=41
Substitute="%":""

[hero7_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=42

;==============================================hero8

[hero8_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=43

[hero8_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=44

[hero8_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=45

[hero8_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=46

[hero8_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=47
Substitute="%":""

[hero8_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=48

;==============================================hero9

[hero9_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=49

[hero9_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=50

[hero9_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=51

[hero9_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=52

[hero9_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=53
Substitute="%":""

[hero9_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=54

;==============================================hero10

[hero10_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=55

[hero10_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=56

[hero10_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=57

[hero10_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=58

[hero10_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=59
Substitute="%":""

[hero10_last_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[HEROAPI]
StringIndex=60


[avg_hero_win_odd]
Measure=Calc
Formula=round(([hero1_win_odd]+[hero2_win_odd]+[hero3_win_odd]+[hero4_win_odd]+[hero5_win_odd]+[hero6_win_odd]+[hero7_win_odd]+[hero8_win_odd]+[hero9_win_odd]+[hero10_win_odd])/10)
DynamicVariables=1
