// Episode 20 root dungeon: spawns and mapflags only; no story quests.
// Source counts: rAthena forum topic 149557.
// Regular mobs use the default respawn delay; Tier 5 boss has a fixed five-hour delay.

jor_root1,0,0	monster	--en--	21972,20
jor_root1,0,0	monster	--en--	21973,10
jor_root1,0,0	monster	--en--	21985,80
jor_root1,0,0	monster	--en--	21986,70
jor_root1,0,0	monster	--en--	21989,20

jor_root2,0,0	monster	--en--	21972,5
jor_root2,0,0	monster	--en--	21973,15
jor_root2,0,0	monster	--en--	21987,40
jor_root2,0,0	monster	--en--	21988,30
jor_root2,0,0	monster	--en--	21989,60

jor_root3,0,0	monster	--en--	21990,130
jor_root3,0,0	monster	--en--	21970,110
jor_root3,0,0	monster	--en--	21971,30

jor_root3,0,0,0,0	boss_monster	--en--	21980,1,18000000,0

jor_root1	mapflag	nosave	SavePoint
jor_root1	mapflag	nomemo
jor_root1	mapflag	noteleport
jor_root2	mapflag	nosave	SavePoint
jor_root2	mapflag	nomemo
jor_root2	mapflag	noteleport
jor_root3	mapflag	nosave	SavePoint
jor_root3	mapflag	nomemo
jor_root3	mapflag	noteleport
