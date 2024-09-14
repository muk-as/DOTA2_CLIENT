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
    // Size: 0xa58
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class CDynamicProp : public server::CBreakableProp
    {
    public:
        bool m_bRandomAnimator; // 0x948        
        [[maybe_unused]] std::uint8_t pad_0x949[0x3]; // 0x949
        entity2::GameTime_t m_flNextRandAnim; // 0x94c        
        float m_flMinRandAnimDuration; // 0x950        
        float m_flMaxRandAnimDuration; // 0x954        
        [[maybe_unused]] std::uint8_t pad_0x958[0x8]; // 0x958
        bool m_bCreateNavObstacle; // 0x960        
        bool m_bNavObstacleUpdatesOverridden; // 0x961        
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0x962        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0x963        
        [[maybe_unused]] std::uint8_t pad_0x964[0x4]; // 0x964
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x968        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0x990        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x9b8        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0x9e0        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xa08        
        CUtlSymbolLarge m_iszIdleAnim; // 0xa30        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xa38        
        bool m_bRandomizeCycle; // 0xa3c        
        bool m_bStartDisabled; // 0xa3d        
        bool m_bFiredStartEndOutput; // 0xa3e        
        bool m_bForceNpcExclude; // 0xa3f        
        bool m_bCreateNonSolid; // 0xa40        
        bool m_bIsOverrideProp; // 0xa41        
        [[maybe_unused]] std::uint8_t pad_0xa42[0x2]; // 0xa42
        int32_t m_iInitialGlowState; // 0xa44        
        int32_t m_nGlowRange; // 0xa48        
        int32_t m_nGlowRangeMin; // 0xa4c        
        Color m_glowColor; // 0xa50        
        int32_t m_nGlowTeam; // 0xa54        
        
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
    static_assert(sizeof(CDynamicProp) == 0xa58);
};
