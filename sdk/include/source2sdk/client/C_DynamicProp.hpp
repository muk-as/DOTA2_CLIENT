#pragma once
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xab0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class C_DynamicProp : public client::C_BreakableProp
    {
    public:
        bool m_bRandomAnimator; // 0x988        
        [[maybe_unused]] std::uint8_t pad_0x989[0x3]; // 0x989
        entity2::GameTime_t m_flNextRandAnim; // 0x98c        
        float m_flMinRandAnimDuration; // 0x990        
        float m_flMaxRandAnimDuration; // 0x994        
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0x998        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0x999        
        [[maybe_unused]] std::uint8_t pad_0x99a[0x6]; // 0x99a
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x9a0        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0x9c8        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x9f0        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xa18        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xa40        
        CUtlSymbolLarge m_iszIdleAnim; // 0xa68        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xa70        
        bool m_bRandomizeCycle; // 0xa74        
        bool m_bStartDisabled; // 0xa75        
        bool m_bFiredStartEndOutput; // 0xa76        
        bool m_bForceNpcExclude; // 0xa77        
        bool m_bCreateNonSolid; // 0xa78        
        bool m_bIsOverrideProp; // 0xa79        
        [[maybe_unused]] std::uint8_t pad_0xa7a[0x2]; // 0xa7a
        int32_t m_iInitialGlowState; // 0xa7c        
        int32_t m_nGlowRange; // 0xa80        
        int32_t m_nGlowRangeMin; // 0xa84        
        Color m_glowColor; // 0xa88        
        int32_t m_nGlowTeam; // 0xa8c        
        int32_t m_iCachedFrameCount; // 0xa90        
        Vector m_vecCachedRenderMins; // 0xa94        
        Vector m_vecCachedRenderMaxs; // 0xaa0        
        [[maybe_unused]] std::uint8_t pad_0xaac[0x4];
        
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
    static_assert(sizeof(C_DynamicProp) == 0xab0);
};
