//Cracked by Roath

#include <ansi.h>
#include <armor.h>

inherit NECK;

void create()
{
	set_name( YEL "Χ��" NOR, ({ "wei bo", "bo" }) );
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long", "����һƤΧ�������Ա���������\n");
		set("value", 150);
		set("material", "leather");
		set("armor_prop/armor", 3);
		set("shaolin",1);
	}
	setup();
}