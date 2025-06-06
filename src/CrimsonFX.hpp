#pragma once

#include "Core/DataTypes.hpp"

namespace CrimsonFX {

#pragma region GeneralFX
void DTReadySFX();
void CalculateViewProperties(byte8* actorBaseAddr);
void DTExplosionFXController(byte8* actorBaseAddr);
void StyleRankHudFadeoutController();

#pragma endregion

#pragma region DanteSpecificFX

void RoyalBlockFX(byte8* actorBaseAddr);
void DelayedComboFXController(byte8* actorBaseAddr);
void StyleSwitchFlux(byte8* actorBaseAddr);
void StyleSwitchDrawText(byte8* actorBaseAddr);
void SetStyleSwitchDrawTextTime(int style, byte8* actorBaseAddr);

#pragma endregion

}