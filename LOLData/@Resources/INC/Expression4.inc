;======================================RSS Api
[RSS]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=20000
DecodeCharacterReference=2
URL="http://lol.15w.com/"
RegExp="(?siU).*FreeHreos.*href="(.*)".*src.*alt="(.*)".*href.*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*hot_piclist.*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*href="(.*)".*src="(.*)".*sz_list.*zsList_date">(.*)<.*src="(.*)".*<strong>(.*)</strong>.*zs_vs">(.*)</div>.*src="(.*)".*<strong>(.*)</strong>.*href="(.*)".*zsList_date">(.*)<.*src="(.*)".*<strong>(.*)</strong>.*zs_vs">(.*)</div>.*src="(.*)".*<strong>(.*)</strong>.*href="(.*)".*zsList_date">(.*)<.*src="(.*)".*<strong>(.*)</strong>.*zs_vs">(.*)</div>.*src="(.*)".*<strong>(.*)</strong>.*href="(.*)""
Debug=1



[NewFreeHeroURL]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=1

[NewHeroname]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=2

;=================================hero1
[freehero1url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=3

[freehero1down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=4

;=================================hero2
[freehero2url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=5

[freehero2down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=6

;=================================hero3
[freehero3url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=7

[freehero3down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=8

;=================================hero4
[freehero4url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=9

[freehero4down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=10

;=================================hero5
[freehero5url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=11

[freehero5down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=12

;=================================hero6
[freehero6url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=13

[freehero6down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=14

;=================================hero7
[freehero7url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=15

[freehero7down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=16

;=================================hero8
[freehero8url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=17

[freehero8down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=18

;=================================hero9
[freehero9url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=19

[freehero9down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=20

;=================================hero10
[freehero10url]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=21

[freehero10down]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
Download=1
StringIndex=22

;-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=rss1
[RSSurl1]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=23

[RSSimage1]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
Download=1
StringIndex=24

;-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=rss2
[RSSurl2]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=25

[RSSimage2]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
Download=1
StringIndex=26


;-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=rss3
[RSSurl3]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=27

[RSSimage3]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
Download=1
StringIndex=28

;-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=rss4
[RSSurl4]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=29

[RSSimage4]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
Download=1
StringIndex=30

;====================================================LPL1
[lpl1_time]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=31

[lpl1_left_logo]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=32
Download=1

[lpl1_left_name]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=33

[lpl1_vs]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=34

[lpl1_right_logo]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=35
Download=1

[lpl1_right_name]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=36

[lpl1_url]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=37

;====================================================LPL2
[lpl2_time]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=38

[lpl2_left_logo]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=39
Download=1

[lpl2_left_name]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=40

[lpl2_vs]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=41

[lpl2_right_logo]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=42
Download=1

[lpl2_right_name]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=43

[lpl2_url]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=44

;====================================================LPL3
[lpl3_time]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=45

[lpl3_left_logo]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=46
Download=1

[lpl3_left_name]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=47

[lpl3_vs]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=48

[lpl3_right_logo]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=49
Download=1

[lpl3_right_name]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=50

[lpl3_url]
Measure=Plugin
Plugin=Plugins\Webparser.dll
Url=[RSS]
StringIndex=51










