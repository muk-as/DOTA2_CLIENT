#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc90
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
        // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
        #pragma pack(push, 1)
        class C_DynamicProp : public source2sdk::client::C_BreakableProp
        {
        public:
            bool m_bRandomAnimator; // 0xb60            
            uint8_t _pad0b61[0x3]; // 0xb61
            source2sdk::entity2::GameTime_t m_flNextRandAnim; // 0xb64            
            float m_flMinRandAnimDuration; // 0xb68            
            float m_flMaxRandAnimDuration; // 0xb6c            
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0xb70            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0xb71            
            uint8_t _pad0b72[0x6]; // 0xb72
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xb78            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0xba0            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xbc8            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xbf0            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xc18            
            CUtlSymbolLarge m_iszIdleAnim; // 0xc40            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xc48            
            bool m_bRandomizeCycle; // 0xc4c            
            bool m_bStartDisabled; // 0xc4d            
            bool m_bFiredStartEndOutput; // 0xc4e            
            bool m_bForceNpcExclude; // 0xc4f            
            bool m_bCreateNonSolid; // 0xc50            
            bool m_bIsOverrideProp; // 0xc51            
            uint8_t _pad0c52[0x2]; // 0xc52
            std::int32_t m_iInitialGlowState; // 0xc54            
            std::int32_t m_nGlowRange; // 0xc58            
            std::int32_t m_nGlowRangeMin; // 0xc5c            
            Color m_glowColor; // 0xc60            
            std::int32_t m_nGlowTeam; // 0xc64            
            std::int32_t m_iCachedFrameCount; // 0xc68            
            Vector m_vecCachedRenderMins; // 0xc6c            
            Vector m_vecCachedRenderMaxs; // 0xc78            
            uint8_t _pad0c84[0xc];
            
            // Datamap fields:
            // CUtlSymbolLarge StartingAnim; // 0x7fffffff
            // CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
            // CUtlSymbolLarge InputSetAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimation; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimation; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputEnableCollision; // 0x0
            // void InputDisableCollision; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // void InputStartGlowing; // 0x0
            // void InputStopGlowing; // 0x0
            // Vector InputSetGlowOverride; // 0x0
            // int32_t InputSetGlowRange; // 0x0
            // void C_DynamicPropAnimThink; // 0x0
            // int32_t health; // 0x7fffffff
            // bool HoldAnimation; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DynamicProp) == 0xc90);
    };
};
