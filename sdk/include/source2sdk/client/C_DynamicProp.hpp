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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xaa8
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
            bool m_bRandomAnimator; // 0x980            
            uint8_t _pad0981[0x3]; // 0x981
            source2sdk::entity2::GameTime_t m_flNextRandAnim; // 0x984            
            float m_flMinRandAnimDuration; // 0x988            
            float m_flMaxRandAnimDuration; // 0x98c            
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0x990            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0x991            
            uint8_t _pad0992[0x6]; // 0x992
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x998            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0x9c0            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x9e8            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xa10            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xa38            
            CUtlSymbolLarge m_iszIdleAnim; // 0xa60            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xa68            
            bool m_bRandomizeCycle; // 0xa6c            
            bool m_bStartDisabled; // 0xa6d            
            bool m_bFiredStartEndOutput; // 0xa6e            
            bool m_bForceNpcExclude; // 0xa6f            
            bool m_bCreateNonSolid; // 0xa70            
            bool m_bIsOverrideProp; // 0xa71            
            uint8_t _pad0a72[0x2]; // 0xa72
            std::int32_t m_iInitialGlowState; // 0xa74            
            std::int32_t m_nGlowRange; // 0xa78            
            std::int32_t m_nGlowRangeMin; // 0xa7c            
            Color m_glowColor; // 0xa80            
            std::int32_t m_nGlowTeam; // 0xa84            
            std::int32_t m_iCachedFrameCount; // 0xa88            
            Vector m_vecCachedRenderMins; // 0xa8c            
            Vector m_vecCachedRenderMaxs; // 0xa98            
            uint8_t _pad0aa4[0x4];
            
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
        
        static_assert(sizeof(source2sdk::client::C_DynamicProp) == 0xaa8);
    };
};
