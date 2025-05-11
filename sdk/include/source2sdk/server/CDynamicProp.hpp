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
        // Size: 0xa70
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
            bool m_bRandomAnimator; // 0x960            
            uint8_t _pad0961[0x3]; // 0x961
            source2sdk::entity2::GameTime_t m_flNextRandAnim; // 0x964            
            float m_flMinRandAnimDuration; // 0x968            
            float m_flMaxRandAnimDuration; // 0x96c            
            uint8_t _pad0970[0x8]; // 0x970
            bool m_bCreateNavObstacle; // 0x978            
            bool m_bNavObstacleUpdatesOverridden; // 0x979            
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0x97a            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0x97b            
            uint8_t _pad097c[0x4]; // 0x97c
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x980            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0x9a8            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x9d0            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0x9f8            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xa20            
            CUtlSymbolLarge m_iszIdleAnim; // 0xa48            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xa50            
            bool m_bRandomizeCycle; // 0xa54            
            bool m_bStartDisabled; // 0xa55            
            bool m_bFiredStartEndOutput; // 0xa56            
            bool m_bForceNpcExclude; // 0xa57            
            bool m_bCreateNonSolid; // 0xa58            
            bool m_bIsOverrideProp; // 0xa59            
            uint8_t _pad0a5a[0x2]; // 0xa5a
            std::int32_t m_iInitialGlowState; // 0xa5c            
            std::int32_t m_nGlowRange; // 0xa60            
            std::int32_t m_nGlowRangeMin; // 0xa64            
            Color m_glowColor; // 0xa68            
            std::int32_t m_nGlowTeam; // 0xa6c            
            
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
        
        static_assert(sizeof(source2sdk::server::CDynamicProp) == 0xa70);
    };
};
