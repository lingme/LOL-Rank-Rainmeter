;==============================================================15w war api
[INFOAPI]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=20000
DecodeCharacterReference=2
Url="http://x.15w.com/test.json.php?tn=battle&gameid=#warid#"
RegExp="(?siU).*pick_turn.*id":(.*),".*pick_turn.*id":(.*),".*pick_turn.*id":(.*),".*pick_turn.*id":(.*),".*pick_turn.*id":(.*),".*pick_turn.*id":(.*),".*duration":(.*),".*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),".*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),".*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),""
Debug=1

;===============================================Ban hero
[left_ban1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=1

[right_ban1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=2

[left_ban2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=3

[right_ban2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=4

[left_ban3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=5

[right_ban3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=6


;====================================================================war time


[war_duration]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
Stringindex=7

[time]
Measure=Calc
Formula=round([war_duration]/60)
DynamicVariables=1


;====================================================================player1

[player1_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=8

[player1_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=9

[player1_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=10

[player1_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=11

[player1_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=12

[player1_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=13

[player1_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=14

[player1_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=15

[player1_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=16

[player1_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=17

[player1_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=18

[player1_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=19


[player1_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=20

[player1_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=21

[player1_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=22

[player1_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=23

[player1_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=24

[player1_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=25

[player1_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=26

[player1_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=27

[player1_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=28

[player1_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=29

[player1_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=30
Substitute="\/":"/"

[player1_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=31

[player1_kda]
Measure=Calc
Formula=round(([player1_kill]+[player1_assists])/[player1_death]*3)
dynamicvariables=1


;====================================================================player2

[player2_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=32

[player2_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=33

[player2_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=34

[player2_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=35

[player2_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=36

[player2_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=37

[player2_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=38

[player2_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=39

[player2_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=40

[player2_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=41

[player2_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=42

[player2_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=43

[player2_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=44

[player2_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=45

[player2_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=46

[player2_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=47

[player2_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=48

[player2_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=49

[player2_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=50

[player2_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=51

[player2_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=52

[player2_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=53

[player2_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=54
Substitute="\/":"/"

[player2_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=55

[player2_kda]
Measure=Calc
Formula=round(([player2_kill]+[player2_assists])/[player2_death]*3)
dynamicvariables=1


;====================================================================player3

[player3_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=56

[player3_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=57

[player3_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=58

[player3_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=59

[player3_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=60

[player3_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=61

[player3_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=62

[player3_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=63

[player3_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=64

[player3_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=65

[player3_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=66

[player3_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=67

[player3_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=68

[player3_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=69

[player3_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=70

[player3_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=71

[player3_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=72

[player3_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=73

[player3_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=74

[player3_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=75

[player3_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=76

[player3_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=77

[player3_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=78
Substitute="\/":"/"

[player3_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI]
StringIndex=79

[player3_kda]
Measure=Calc
Formula=round(([player3_kill]+[player3_assists])/[player3_death]*3)
dynamicvariables=1

;====================================================================================
[INFOAPI6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=20000
DecodeCharacterReference=2
Url="http://x.15w.com/test.json.php?tn=battle&gameid=#warid#"
RegExp="(?siU).*largest_multi_kill.*largest_multi_kill.*largest_multi_kill.*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),""
Debug=1
;====================================================================player4

[player4_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=1

[player4_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=2

[player4_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=3

[player4_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=4

[player4_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=5

[player4_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=6

[player4_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=7

[player4_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=8

[player4_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=9

[player4_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=10

[player4_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=11

[player4_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=12

[player4_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=13

[player4_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=14

[player4_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=15

[player4_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=16

[player4_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=17

[player4_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=18

[player4_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=19

[player4_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=20

[player4_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=21

[player4_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=22

[player4_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=23
Substitute="\/":"/"

[player4_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI6]
StringIndex=24

[player4_kda]
Measure=Calc
Formula=round(([player4_kill]+[player4_assists])/[player4_death]*3)
dynamicvariables=1

;======================================================================DUOAPI
[INFOAPI2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=20000
DecodeCharacterReference=2
Url="http://x.15w.com/test.json.php?tn=battle&gameid=#warid#"
RegExp="(?siU).*largest_multi_kill.*largest_multi_kill.*largest_multi_kill.*largest_multi_kill.*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),".*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),".*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),".*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),""
Debug=1


;====================================================================player5

[player5_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=1

[player5_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=2

[player5_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=3

[player5_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=4

[player5_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=5

[player5_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=6

[player5_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=7

[player5_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=8

[player5_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=9

[player5_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=10

[player5_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=11

[player5_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=12

[player5_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=13

[player5_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=14

[player5_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=15

[player5_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=16

[player5_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=17

[player5_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=18

[player5_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=19

[player5_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=20

[player5_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=21

[player5_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=22

[player5_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=23
Substitute="\/":"/"

[player5_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=24

[player5_kda]
Measure=Calc
Formula=round(([player5_kill]+[player5_assists])/[player5_death]*3)
dynamicvariables=1

;====================================================================player6

[player6_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=25

[player6_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=26

[player6_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=27

[player6_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=28

[player6_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=29

[player6_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=30

[player6_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=31

[player6_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=32

[player6_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=33

[player6_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=34

[player6_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=35

[player6_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=36

[player6_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=37

[player6_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=38

[player6_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=39

[player6_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=40

[player6_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=41

[player6_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=42

[player6_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=43

[player6_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=44

[player6_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=45

[player6_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=46

[player6_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=47
Substitute="\/":"/"

[player6_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=48

[player6_kda]
Measure=Calc
Formula=round(([player6_kill]+[player6_assists])/[player6_death]*3)
dynamicvariables=1


;====================================================================player7

[player7_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=49

[player7_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=50

[player7_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=51

[player7_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=52

[player7_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=53

[player7_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=54

[player7_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=55

[player7_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=56

[player7_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=57

[player7_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=58

[player7_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=59

[player7_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=60

[player7_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=61

[player7_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=62

[player7_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=63

[player7_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=64

[player7_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=65

[player7_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=66

[player7_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=67

[player7_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=68

[player7_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=69

[player7_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=70

[player7_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=71
Substitute="\/":"/"

[player7_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI2]
StringIndex=72

[player7_kda]
Measure=Calc
Formula=round(([player7_kill]+[player7_assists])/[player7_death]*3)
dynamicvariables=1


;======================================================================DUOAPI3
[INFOAPI3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=20000
DecodeCharacterReference=2
Url="http://x.15w.com/test.json.php?tn=battle&gameid=#warid#"
RegExp="(?siU).*largest_multi_kill.*largest_multi_kill.*largest_multi_kill.*largest_multi_kill.*largest_multi_kill.*largest_multi_kill.*largest_multi_kill.*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),".*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),".*largest_multi_kill":(.*),".*total_damage_dealt":(.*),"physical_damage_dealt_to_champions":(.*),".*magic_damage_dealt_to_champions":(.*),".*champions_killed":(.*),".*gold_earned":(.*),".*total_health":(.*),".*item2":(.*),"item3":(.*),"item0":(.*),"item1":(.*),".*champion_id":(.*),".*total_damage_dealt_to_champions":(.*),"item4":(.*),"item5":(.*),".*turrets_killed":(.*),".*item6":(.*),"num_deaths":(.*),"assists":(.*),"total_damage_taken":(.*),"minions_killed":(.*),".*level":(.*),".*link":"(.*)",".*bingo_score":(.*),""
Debug=1

;====================================================================player8

[player8_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=1

[player8_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=2

[player8_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=3

[player8_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=4

[player8_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=5

[player8_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=6

[player8_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=7

[player8_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=8

[player8_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=9

[player8_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=10

[player8_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=11

[player8_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=12

[player8_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=13

[player8_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=14

[player8_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=15

[player8_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=16

[player8_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=17

[player8_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=18

[player8_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=19

[player8_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=20

[player8_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=21

[player8_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=22

[player8_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=23
Substitute="\/":"/"

[player8_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=24

[player8_kda]
Measure=Calc
Formula=round(([player8_kill]+[player8_assists])/[player8_death]*3)
dynamicvariables=1


;====================================================================player9

[player9_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=25

[player9_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=26

[player9_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=27

[player9_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=28

[player9_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=29

[player9_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=30

[player9_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=31

[player9_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=32

[player9_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=33

[player9_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=34

[player9_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=35

[player9_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=36

[player9_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=37

[player9_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=38

[player9_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=39

[player9_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=40

[player9_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=41

[player9_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=42

[player9_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=43

[player9_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=44

[player9_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=45

[player9_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=46

[player9_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=47
Substitute="\/":"/"

[player9_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=48

[player9_kda]
Measure=Calc
Formula=round(([player9_kill]+[player9_assists])/[player9_death]*3)
dynamicvariables=1


;====================================================================player10

[player10_duosha]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=49

[player10_shuchu]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=50

[player10_wuli]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=51

[player10_mofa]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=52

[player10_kill]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=53

[player10_gold]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=54

[player10_zhiliao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=55

[player10_item1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=56

[player10_item2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=57

[player10_item3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=58

[player10_item4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=59

[player10_hero]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=60

[player10_zongshanhai]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=61

[player10_item5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=62

[player10_item6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=63

[player10_tuita]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=64

[player10_item7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=65

[player10_death]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=66

[player10_assists]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=67

[player10_chengshou]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=68

[player10_budao]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=69

[player10_level]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=70

[player10_name]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=71
Substitute="\/":"/"

[player10_bingo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[INFOAPI3]
StringIndex=72

[player10_kda]
Measure=Calc
Formula=round(([player10_kill]+[player10_assists])/[player10_death]*3)
dynamicvariables=1







