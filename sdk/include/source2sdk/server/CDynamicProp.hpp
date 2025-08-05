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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xad0
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
            bool m_bRandomAnimator; // 0x9c0            
            uint8_t _pad09c1[0x3]; // 0x9c1
            source2sdk::entity2::GameTime_t m_flNextRandAnim; // 0x9c4            
            float m_flMinRandAnimDuration; // 0x9c8            
            float m_flMaxRandAnimDuration; // 0x9cc            
            uint8_t _pad09d0[0x8]; // 0x9d0
            bool m_bCreateNavObstacle; // 0x9d8            
            bool m_bNavObstacleUpdatesOverridden; // 0x9d9            
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0x9da            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0x9db            
            uint8_t _pad09dc[0x4]; // 0x9dc
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x9e0            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0xa08            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xa30            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xa58            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xa80            
            CUtlSymbolLarge m_iszIdleAnim; // 0xaa8            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xab0            
            bool m_bRandomizeCycle; // 0xab4            
            bool m_bStartDisabled; // 0xab5            
            bool m_bFiredStartEndOutput; // 0xab6            
            bool m_bForceNpcExclude; // 0xab7            
            bool m_bCreateNonSolid; // 0xab8            
            bool m_bIsOverrideProp; // 0xab9            
            uint8_t _pad0aba[0x2]; // 0xaba
            std::int32_t m_iInitialGlowState; // 0xabc            
            std::int32_t m_nGlowRange; // 0xac0            
            std::int32_t m_nGlowRangeMin; // 0xac4            
            Color m_glowColor; // 0xac8            
            std::int32_t m_nGlowTeam; // 0xacc            
            
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
        
        static_assert(sizeof(source2sdk::server::CDynamicProp) == 0xad0);
    };
};
