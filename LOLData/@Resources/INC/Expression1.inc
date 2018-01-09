;=================================================DuowanAPI

[15W_API]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=20000
DecodeCharacterReference=2
URL="http://x.15w.com/summoner/#temp#"
RegExp="(?siU).*profileicon/(.*).jpg.*<span>(.*)</span>.*username.*<h3>(.*)</h3><p>(.*)</p>.*tier-icon tier-(.*)">.*userpower.*<dd>(.*)</dd>.*tblist.*<tbody>.*<td>.*</td><td>(.*)</td><td>(.*)%</td><td>(.*)</td><td>(.*)</td>.*<tr>.*</tr><tr><td>.*</td><td>(.*)</td><td>(.*)%</td><td>(.*)</td><td>(.*)</td><td>(.*)</td><td>(.*)</td></tr><tr><td>.*</td><td>(.*)</td><td>(.*)%</td><td>(.*)</td><td>(.*)</td><td>(.*)</td><td>(.*)</td></tr>.*"win_num" : "(.*)","lose_num" : "(.*)"}.*kdanum">.*>.*>(.*)<.*>.*>(.*)<.*>.*>(.*)<.*matchlists.*<thead>.*</thead>.*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)".*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)".*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)".*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)".*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)".*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)".*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)".*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)".*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)".*class="hero-ico hero-(.*)".*<td>(.*)</td>.*font color="(.*)".*<td>(.*)</td>.*href="(.*)""
Debug=1


;=================================================summoner_icon_Name
[Summoner_icon_Name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=1

;=================================================summoner_level
[Summoner_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=2

;=================================================player_name
[Player_name]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[15W_API]
StringIndex=3

;=================================================server_name
[Server_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=4


;=================================================dan_icon_name
[Dan_icon_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=5

;==================================================power
[Power]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=6

;=====================================================jingdian model
;==========jingdian sum
[Jingdian_sum]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[15W_API]
StringIndex=7

;==========jingdian win odd
[Jingdian_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=8

[Jingdian_shenglv]
Measure=Calc
Formula=[Jingdian_win_odd]/100
DynamicVariables=1

;==========jingdian win
[Jingdian_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=9

;==========jingdian lose
[Jingdian_lose]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=10

;======================================================s5Dan model
;============s5dan sum
[S5dan_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=11

;============s5dan win odd
[S5dan_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=12

[S5dan_win_shenglv]
Measure=calc
Formula=[S5dan_win_odd]/100
DynamicVariables=1

;============s5dan win
[S5dan_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=13

;============s5dan lose
[S5dan_lose]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=14

;============s5dan level name
[S5dan_level_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=15
Substitute="&nbsp;&nbsp;":""

;============s5dan point
[S5dan_point]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=16
;==================================================================

;======================================================s4Dan model
;============s4dan sum
[S4dan_sum]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=17

;============s4dan win odd
[S4dan_win_odd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=18

[S4dan_win_shenglv]
Measure=Calc
Formula=[S4dan_win_odd]/100
DynamicVariables=1
;============s4dan win
[S4dan_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=19

;============s4dan lose
[S4dan_lose]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=20

;============s4dan level name
[S4dan_level_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=21
Substitute="&nbsp;&nbsp;":""

;============s4dan point
[S4dan_point]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=22
;==================================================================


;====================================================================K/D/A
[war20_win]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=23
dynamicvariables=1

[war20_lose]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=24

[war20_win_odd]
Measure=Calc
Formula=[war20_win]/20*100
dynamicvariables=1

[war20_k]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=25

[war20_d]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=26

[war20_a]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=27

[RandomMETER]
Measure=Calc
Formula=(Random)
LowBound=1
HighBound=9

[kda]
Measure=Calc
Formula=round(([war20_k]+[war20_a])/[war20_d]*3)+[RandomMETER]/10
dynamicvariables=1

;===============================================war1
[war1_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=28

[war1_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=29

[war1_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=30
Substitute="#C80000":"0","#129E0F":"1"

[war1_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=31
Substitute="2015-":""

[war1_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=32

;===============================================war2
[war2_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=33

[war2_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=34

[war2_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=35
Substitute="#C80000":"0","#129E0F":"1"

[war2_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=36
Substitute="2015-":""

[war2_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=37

;===============================================war3
[war3_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=38

[war3_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=39

[war3_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=40
Substitute="#C80000":"0","#129E0F":"1"

[war3_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=41
Substitute="2015-":""

[war3_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=42

;===============================================war4
[war4_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=43

[war4_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=44

[war4_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=45
Substitute="#C80000":"0","#129E0F":"1"

[war4_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=46
Substitute="2015-":""

[war4_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=47

;===============================================war5
[war5_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=48

[war5_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=49

[war5_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=50
Substitute="#C80000":"0","#129E0F":"1"

[war5_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=51
Substitute="2015-":""

[war5_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=52

;===============================================war6
[war6_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=53

[war6_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=54

[war6_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=55
Substitute="#C80000":"0","#129E0F":"1"

[war6_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=56
Substitute="2015-":""

[war6_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=57

;===============================================war7
[war7_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=58

[war7_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=59

[war7_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=60
Substitute="#C80000":"0","#129E0F":"1"

[war7_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=61
Substitute="2015-":""

[war7_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=62

;===============================================war8
[war8_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=63

[war8_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=64

[war8_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=65
Substitute="#C80000":"0","#129E0F":"1"

[war8_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=66
Substitute="2015-":""

[war8_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=67

;===============================================war9
[war9_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=68

[war9_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=69

[war9_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=70
Substitute="#C80000":"0","#129E0F":"1"

[war9_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=71
Substitute="2015-":""

[war9_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=72

;===============================================war10
[war10_icon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=73

[war10_mod]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=74

[war10_outcome]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=75
Substitute="#C80000":"0","#129E0F":"1"

[war10_time]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=76
Substitute="2015-":""

[war10_url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[15W_API]
StringIndex=77



