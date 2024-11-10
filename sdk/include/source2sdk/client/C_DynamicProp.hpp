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
    // Size: 0xaf8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class C_DynamicProp : public client::C_BreakableProp
    {
    public:
        bool m_bRandomAnimator; // 0x9d0        
        [[maybe_unused]] std::uint8_t pad_0x9d1[0x3]; // 0x9d1
        entity2::GameTime_t m_flNextRandAnim; // 0x9d4        
        float m_flMinRandAnimDuration; // 0x9d8        
        float m_flMaxRandAnimDuration; // 0x9dc        
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0x9e0        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0x9e1        
        [[maybe_unused]] std::uint8_t pad_0x9e2[0x6]; // 0x9e2
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x9e8        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0xa10        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xa38        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xa60        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xa88        
        CUtlSymbolLarge m_iszIdleAnim; // 0xab0        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xab8        
        bool m_bRandomizeCycle; // 0xabc        
        bool m_bStartDisabled; // 0xabd        
        bool m_bFiredStartEndOutput; // 0xabe        
        bool m_bForceNpcExclude; // 0xabf        
        bool m_bCreateNonSolid; // 0xac0        
        bool m_bIsOverrideProp; // 0xac1        
        [[maybe_unused]] std::uint8_t pad_0xac2[0x2]; // 0xac2
        int32_t m_iInitialGlowState; // 0xac4        
        int32_t m_nGlowRange; // 0xac8        
        int32_t m_nGlowRangeMin; // 0xacc        
        Color m_glowColor; // 0xad0        
        int32_t m_nGlowTeam; // 0xad4        
        int32_t m_iCachedFrameCount; // 0xad8        
        Vector m_vecCachedRenderMins; // 0xadc        
        Vector m_vecCachedRenderMaxs; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xaf4[0x4];
        
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
    static_assert(sizeof(C_DynamicProp) == 0xaf8);
};
