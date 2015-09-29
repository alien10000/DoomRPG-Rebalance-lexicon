#ifndef DOOMRPG_MENU_H
#define DOOMRPG_MENU_H

#include "Defs.h"

str RPGMap MainMenu[MAX_MENU];
int RPGMap MainMenuColor[MAX_MENU];
int RPGMap CursorColors[6];
int RPGMap MenuCursorColor;

NamedScript void UpdateMenu();
NamedScript KeyBind void OpenMenu();

void MenuLoop();

void DrawMainMenu();
void DrawStatsMenu();
void DrawAugsMenu();
void DrawSkillMenu();
void DrawShieldMenu();
void DrawStimsMenu();
void DrawTurretMenu();
void DrawTurretInfo(fixed, fixed, int);
void DrawTurretTimers(fixed, fixed);

void MenuInput();

void IncreaseStat(int);
void IncreaseSkill(int, int);
void UpgradeTurret(int);
void PrintStatError();
void MenuHelp();

void DrawPlayerSprite(int, fixed, fixed);
void DrawToxicityBar(fixed, fixed, bool);
void ClearToxicityMeter();

#endif
