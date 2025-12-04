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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            bool m_bRandomAnimator; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flNextRandAnim; // 0x_            
            float m_flMinRandAnimDuration; // 0x_            
            float m_flMaxRandAnimDuration; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bCreateNavObstacle; // 0x_            
            bool m_bNavObstacleUpdatesOverridden; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0x_            
            CUtlSymbolLarge m_iszIdleAnim; // 0x_            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0x_            
            bool m_bRandomizeCycle; // 0x_            
            bool m_bStartDisabled; // 0x_            
            bool m_bFiredStartEndOutput; // 0x_            
            bool m_bForceNpcExclude; // 0x_            
            bool m_bCreateNonSolid; // 0x_            
            bool m_bIsOverrideProp; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iInitialGlowState; // 0x_            
            std::int32_t m_nGlowRange; // 0x_            
            std::int32_t m_nGlowRangeMin; // 0x_            
            Color m_glowColor; // 0x_            
            std::int32_t m_nGlowTeam; // 0x_            
            
            // Datamap fields:
            // CUtlSymbolLarge StartingAnim; // 0x_
            // CUtlSymbolLarge StartingAnimationLoopMode; // 0x_
            // CUtlSymbolLarge InputSetAnimationLooping; // 0x_
            // CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x_
            // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x_
            // CUtlSymbolLarge InputSetAnimationNotLooping; // 0x_
            // CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x_
            // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x_
            // CUtlSymbolLarge InputSetAnimation; // 0x_
            // CUtlSymbolLarge InputSetAnimationNoReset; // 0x_
            // CUtlSymbolLarge InputSetIdleAnimation; // 0x_
            // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x_
            // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // void InputEnableCollision; // 0x_
            // void InputDisableCollision; // 0x_
            // float InputSetPlaybackRate; // 0x_
            // void InputStartGlowing; // 0x_
            // void InputStopGlowing; // 0x_
            // Vector InputSetGlowOverride; // 0x_
            // int32_t InputSetGlowRange; // 0x_
            // void CDynamicPropAnimThink; // 0x_
            // int32_t health; // 0x_
            // bool HoldAnimation; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDynamicProp) == 0x_);
    };
};
