#include "StdAfx.h"

void Customs()
{
	DWORD Dword;
	BYTE Byte;
	GetPrivateProfileString("- CUSTOMS -", "_MENSAGEM INICIAL", "GAMESERVER BY CHRISTYAN", ConnectServ, 50, CHRISTYAN);
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_65K ATIVE", 1, CHRISTYAN);
	{
		BYTE btValue = 0xB7;
		if(Dword == 0)
		{
			return;
		}
		else
		{
			*(BYTE*)(0x0042856F) = btValue;
			*(BYTE*)(0x0045C07E) = btValue;
			*(BYTE*)(0x0045C10D) = btValue;
			*(BYTE*)(0x0045C19C) = btValue;
			*(BYTE*)(0x0045C22B) = btValue;
			*(BYTE*)(0x00452027) = btValue;
			*(BYTE*)(0x0045204E) = btValue;
			*(BYTE*)(0x00452076) = btValue;
			*(BYTE*)(0x0045209D) = btValue;
			*(BYTE*)(0x004520D0) = btValue;
			*(BYTE*)(0x004520EB) = btValue;
			*(BYTE*)(0x00452107) = btValue;
			*(BYTE*)(0x00452122) = btValue;
			*(BYTE*)(0x00452153) = btValue;
			*(BYTE*)(0x0045216E) = btValue;
			*(BYTE*)(0x0045218A) = btValue;
			*(BYTE*)(0x004521A5) = btValue;
			*(BYTE*)(0x004521C3) = btValue;
			*(BYTE*)(0x004521DF) = btValue;
			*(BYTE*)(0x004521FC) = btValue;
			*(BYTE*)(0x00452217) = btValue;
			*(BYTE*)(0x0045257A) = btValue;
			*(BYTE*)(0x0045537A) = btValue;
			*(BYTE*)(0x00456250) = btValue;
			*(BYTE*)(0x0045CC74) = btValue;
			*(BYTE*)(0x0046AE75) = btValue;
			*(BYTE*)(0x0047D334) = btValue;
			*(BYTE*)(0x0047D50E) = btValue;
			*(BYTE*)(0x0047D69E) = btValue;
			*(BYTE*)(0x004285B9) = btValue;
			*(BYTE*)(0x0045C09A) = btValue;
			*(BYTE*)(0x0045C129) = btValue;
			*(BYTE*)(0x0045C1B8) = btValue;
			*(BYTE*)(0x0045C247) = btValue;
			*(BYTE*)(0x00451F96) = btValue;
			*(BYTE*)(0x00451FB1) = btValue;
			*(BYTE*)(0x00451FCD) = btValue;
			*(BYTE*)(0x00451FE8) = btValue;
			*(BYTE*)(0x0045201D) = btValue;
			*(BYTE*)(0x00452044) = btValue;
			*(BYTE*)(0x0045206C) = btValue;
			*(BYTE*)(0x00452093) = btValue;
			*(BYTE*)(0x00452584) = btValue;
			*(BYTE*)(0x004525D7) = btValue;
			*(BYTE*)(0x004525F1) = btValue;
			*(BYTE*)(0x00452631) = btValue;
			*(BYTE*)(0x0045264C) = btValue;
			*(BYTE*)(0x00452669) = btValue;
			*(BYTE*)(0x00452684) = btValue;
			*(BYTE*)(0x00452998) = btValue;
			*(BYTE*)(0x004529B6) = btValue;
			*(BYTE*)(0x00452CA9) = btValue;
			*(BYTE*)(0x00452CD6) = btValue;
			*(BYTE*)(0x00452CF3) = btValue;
			*(BYTE*)(0x00455366) = btValue;
			*(BYTE*)(0x00458772) = btValue;
			*(BYTE*)(0x0045CC7E) = btValue;
			*(BYTE*)(0x0046AE93) = btValue;
			*(BYTE*)(0x0047D33E) = btValue;
			*(BYTE*)(0x0047D518) = btValue;
			*(BYTE*)(0x0047D6A8) = btValue;
			*(BYTE*)(0x0045C0B8) = btValue;
			*(BYTE*)(0x0045C147) = btValue;
			*(BYTE*)(0x0045C1D6) = btValue;
			*(BYTE*)(0x0045C265) = btValue;
			*(BYTE*)(0x004583A9) = btValue;
			*(BYTE*)(0x0045CC8A) = btValue;
			*(BYTE*)(0x0045CD8F) = btValue;
			*(BYTE*)(0x0047D34A) = btValue;
			*(BYTE*)(0x0047D524) = btValue;
			*(BYTE*)(0x0047D6B4) = btValue;
			*(BYTE*)(0x0047DF1A) = btValue;
			*(BYTE*)(0x0047DF3D) = btValue;
			*(BYTE*)(0x0047DF60) = btValue;
			*(BYTE*)(0x0047DF83) = btValue;
			*(BYTE*)(0x0045C0D6) = btValue;
			*(BYTE*)(0x0045C165) = btValue;
			*(BYTE*)(0x0045C1F4) = btValue;
			*(BYTE*)(0x0045C283) = btValue;
			*(BYTE*)(0x004524C3) = btValue;
			*(BYTE*)(0x004524DE) = btValue;
			*(BYTE*)(0x00455B37) = btValue;
			*(BYTE*)(0x00455B61) = btValue;
			*(BYTE*)(0x00455BB6) = btValue;
			*(BYTE*)(0x00455BE0) = btValue;
			*(BYTE*)(0x00455C32) = btValue;
			*(BYTE*)(0x00455C5C) = btValue;
			*(BYTE*)(0x00455CA3) = btValue;
			*(BYTE*)(0x00455CCD) = btValue;
			*(BYTE*)(0x00455CFA) = btValue;
			*(BYTE*)(0x00455D24) = btValue;
			*(BYTE*)(0x00455D64) = btValue;
			*(BYTE*)(0x004583BD) = btValue;
			*(BYTE*)(0x004583DB) = btValue;
			*(BYTE*)(0x00458786) = btValue;
			*(BYTE*)(0x004587A5) = btValue;
			*(BYTE*)(0x004588CE) = btValue;
			*(BYTE*)(0x00458A5F) = btValue;
			*(BYTE*)(0x00458EC9) = btValue;
			*(BYTE*)(0x0045CC96) = btValue;
			*(BYTE*)(0x0045CE49) = btValue;
			*(BYTE*)(0x004790F6) = btValue;
			*(BYTE*)(0x00479512) = btValue;
			*(BYTE*)(0x0047D356) = btValue;
			*(BYTE*)(0x0047D530) = btValue;
			*(BYTE*)(0x0047D6C0) = btValue;
		}
	}
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PORTA UDP", 0, CHRISTYAN);
	*(unsigned int*)(0x0048A098+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_JOGADORES CONECTADO", 0, CHRISTYAN);
	*(unsigned int*)(0x005133E7+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_LEVEL MAXIMO", 0, CHRISTYAN);
	*(unsigned int*)(0x00459BA2+3) = Dword;
	*(unsigned int*)(0x00462A33+2) = Dword;
	*(unsigned int*)(0x00496D93+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_DROP NORMAL C/ SKILL", 0, CHRISTYAN);
	*(unsigned int*)(0x00409E36+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_DROP NORMAL C/ LUCK", 0, CHRISTYAN);
	*(unsigned int*)(0x00409E3D+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_DROP EXCELENTE", 0, CHRISTYAN);
	*(unsigned int*)(0x00409C25+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_DROP EXCELENTE C/ SKILL", 0, CHRISTYAN);
	*(unsigned int*)(0x00409DE3+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_DROP EXCELENTE C/ LUCK", 0, CHRISTYAN);
	*(unsigned int*)(0x00409DEA+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PRE�O DA JEWEL OF CHAOS", 0, CHRISTYAN);
	*(unsigned int*)(0x00480053+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PRE�O DA JEWEL OF BLESS", 0, CHRISTYAN);
	*(unsigned int*)(0x0048001E+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PRE�O DA JEWEL OF SOUL", 0, CHRISTYAN);
	*(unsigned int*)(0x00480038+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PRE�O DA JEWEL OF LIFE", 0, CHRISTYAN);
	*(unsigned int*)(0x0048006E+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PRE�O DA JEWEL CREATION", 0, CHRISTYAN);
	*(unsigned int*)(0x00480088+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PRE�O DA PENA AZUL", 0, CHRISTYAN);
	*(unsigned int*)(0x004800BE+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PRE�O DA FRUIT", 0, CHRISTYAN);
	*(unsigned int*)(0x004800A3+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PRE�O DO DINORANT", 0, CHRISTYAN);
	*(unsigned int*)(0x004800D8+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_VITALIDADE INTERIOR", 0, CHRISTYAN);
	*(unsigned int*)(0x004583B0+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_ENERGIA INTERIOR", 0, CHRISTYAN);
	*(unsigned int*)(0x004583C4+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_TEMPO INTERIOR", 0, CHRISTYAN);
	*(unsigned int*)(0x004583E2+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_DURA��O DA MANA SHIELD", 0, CHRISTYAN);
	*(unsigned int*)(0x004587B3+2) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PORCENTAGEM INICIAL", 0, CHRISTYAN);
	*(unsigned int*)(0x00458794+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PONTOS EM AGI PARA 1%", 0, CHRISTYAN);
	*(unsigned int*)(0x00458779+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_PONTOS EM ENE PARA 1%", 0, CHRISTYAN);
	*(unsigned int*)(0x0045878D+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_DURA��O DA MS PARA ENE", 0, CHRISTYAN);
	*(unsigned int*)(0x004587AC+1) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_ANEL DO BUDGE DRAGON", 0, CHRISTYAN);
	*(unsigned int*)(0x00458C98+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_ANEL DO GIANT", 0, CHRISTYAN);
	*(unsigned int*)(0x00458CA1+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_ANEL DO SKELETON", 0, CHRISTYAN);
	*(unsigned int*)(0x00458CAA+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_ANEL DO POISON BULL", 0, CHRISTYAN);
	*(unsigned int*)(0x00458CB3+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_ANEL DO THUNDER LICH", 0, CHRISTYAN);
	*(unsigned int*)(0x00458CBC+3) = Dword;
	Dword = GetPrivateProfileInt("- CUSTOMS -", "_ANEL DO DEATH COW", 0, CHRISTYAN);
	*(unsigned int*)(0x00458CC5+3) = Dword;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_PONTOS PARA DK/DW/ELF", 0, CHRISTYAN);
	*(unsigned char*)(0x00462B0C+2) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_PONTOS PARA MG", 0, CHRISTYAN);
	*(unsigned char*)(0x00462AF5+2) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_ID DO ITEM", 0, CHRISTYAN);
	*(unsigned char*)(0x0049B1F8+1) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_ID DO GRUPO", 0, CHRISTYAN);
	*(unsigned char*)(0x0049B1FA+1) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_PLAYER VS PLAYER", 0, CHRISTYAN);
	*(unsigned char*)(0x0048C586+1) = Byte;
	*(unsigned char*)(0x0048C783+1) = Byte;
	*(unsigned char*)(0x0048C980+1) = Byte;
	*(unsigned char*)(0x0048CA98+1) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_RATE DE ITENS +10", 0, CHRISTYAN);
	*(unsigned char*)(0x00449267+6) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_RATE DE ITENS +11", 0, CHRISTYAN);
	*(unsigned char*)(0x00449276+6) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_RATE MINIMO DAS ASAS", 0, CHRISTYAN);
	*(unsigned char*)(0x0044A274+6) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_RATE MAXIMO DAS ASAS", 0, CHRISTYAN);
	*(unsigned char*)(0x0044A280+6) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_RATE DA SOUL SEM LUCK", 0, CHRISTYAN);
	*(unsigned char*)(0x0047A069+3) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_RATE DA SOUL COM LUCK", 0, CHRISTYAN);
	*(unsigned char*)(0x00479F8A+3) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_RATE DA LIFE SEM LUCK", 0, CHRISTYAN);
	*(unsigned char*)(0x0047A678+3) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_ORB OF GLOBIN", 0, CHRISTYAN);
	*(unsigned char*)(0x00457E3F+1) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_ORB OF STONE GOLEM", 0, CHRISTYAN);
	*(unsigned char*)(0x00457E70+1) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_ORB OF ASSASSIN", 0, CHRISTYAN);
	*(unsigned char*)(0x00457EA1+1) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_ORB OF ELITE YETI", 0, CHRISTYAN);
	*(unsigned char*)(0x00457ED2+1) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_ORB OF DARK KNIGHT", 0, CHRISTYAN);
	*(unsigned char*)(0x00457F03+1) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_ORB OF BALI", 0, CHRISTYAN);
	*(unsigned char*)(0x00457F34+1) = Byte;
	Byte = GetPrivateProfileInt("- CUSTOMS -", "_ORB OF SOLDIER", 0, CHRISTYAN);
	*(unsigned char*)(0x00457F65+1) = Byte;
}