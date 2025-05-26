#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xab8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
        // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
        #pragma pack(push, 1)
        class CDynamicProp : public source2sdk::server::CBreakableProp
        {
        public:
            bool m_bRandomAnimator; // 0x9a8            
            uint8_t _pad09a9[0x3]; // 0x9a9
            source2sdk::entity2::GameTime_t m_flNextRandAnim; // 0x9ac            
            float m_flMinRandAnimDuration; // 0x9b0            
            float m_flMaxRandAnimDuration; // 0x9b4            
            uint8_t _pad09b8[0x8]; // 0x9b8
            bool m_bCreateNavObstacle; // 0x9c0            
            bool m_bNavObstacleUpdatesOverridden; // 0x9c1            
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0x9c2            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0x9c3            
            uint8_t _pad09c4[0x4]; // 0x9c4
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x9c8            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0x9f0            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xa18            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xa40            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xa68            
            CUtlSymbolLarge m_iszIdleAnim; // 0xa90            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xa98            
            bool m_bRandomizeCycle; // 0xa9c            
            bool m_bStartDisabled; // 0xa9d            
            bool m_bFiredStartEndOutput; // 0xa9e            
            bool m_bForceNpcExclude; // 0xa9f            
            bool m_bCreateNonSolid; // 0xaa0            
            bool m_bIsOverrideProp; // 0xaa1            
            uint8_t _pad0aa2[0x2]; // 0xaa2
            std::int32_t m_iInitialGlowState; // 0xaa4            
            std::int32_t m_nGlowRange; // 0xaa8            
            std::int32_t m_nGlowRangeMin; // 0xaac            
            Color m_glowColor; // 0xab0            
            std::int32_t m_nGlowTeam; // 0xab4            
            
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
            // void CDynamicPropAnimThink; // 0x0
            // int32_t health; // 0x7fffffff
            // bool HoldAnimation; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDynamicProp) == 0xab8);
    };
};
