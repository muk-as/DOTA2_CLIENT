#pragma once
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa80
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class CDynamicProp : public server::CBreakableProp
    {
    public:
        bool m_bRandomAnimator; // 0x970        
        [[maybe_unused]] std::uint8_t pad_0x971[0x3]; // 0x971
        entity2::GameTime_t m_flNextRandAnim; // 0x974        
        float m_flMinRandAnimDuration; // 0x978        
        float m_flMaxRandAnimDuration; // 0x97c        
        [[maybe_unused]] std::uint8_t pad_0x980[0x8]; // 0x980
        bool m_bCreateNavObstacle; // 0x988        
        bool m_bNavObstacleUpdatesOverridden; // 0x989        
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0x98a        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0x98b        
        [[maybe_unused]] std::uint8_t pad_0x98c[0x4]; // 0x98c
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x990        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0x9b8        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x9e0        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xa08        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xa30        
        CUtlSymbolLarge m_iszIdleAnim; // 0xa58        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xa60        
        bool m_bRandomizeCycle; // 0xa64        
        bool m_bStartDisabled; // 0xa65        
        bool m_bFiredStartEndOutput; // 0xa66        
        bool m_bForceNpcExclude; // 0xa67        
        bool m_bCreateNonSolid; // 0xa68        
        bool m_bIsOverrideProp; // 0xa69        
        [[maybe_unused]] std::uint8_t pad_0xa6a[0x2]; // 0xa6a
        int32_t m_iInitialGlowState; // 0xa6c        
        int32_t m_nGlowRange; // 0xa70        
        int32_t m_nGlowRangeMin; // 0xa74        
        Color m_glowColor; // 0xa78        
        int32_t m_nGlowTeam; // 0xa7c        
        
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
    static_assert(sizeof(CDynamicProp) == 0xa80);
};
