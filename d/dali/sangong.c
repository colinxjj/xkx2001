//Cracked by Roath
// Room: /d/dali/sangong.c

inherit ROOM;

void create()
{
	set("short", "����ǰ��");
	set("long", @LONG
�����Ǵ�������Ҫ���õ�ǰ�����˴�����Ա�����������֮�������ò�����
��װ�����أ����������־���ʿ���֡����˶�����ڣ��������������һ�ţ�
ͨ���������Ե�˾�á�
LONG);
	set("objects", ([
		__DIR__"npc/weishi5" : 2,
		__DIR__"npc/weishi2" : 2,
		]));
	set("exits", ([
		"northeast" : __DIR__"wangfu2",
		"north" : __DIR__"sangong2.c",
		"south" : __DIR__"sangong3.c",
		"west" : __DIR__"sangong1.c",
		]));
	set("cost", 1);
	set("wangfu", 1);
	set("no_clean_up", 0);
	set("no_sleep_room",1);
	setup();
	replace_program(ROOM);
}