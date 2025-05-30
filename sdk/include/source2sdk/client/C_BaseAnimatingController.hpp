#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/CNetworkedSequenceOperation.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/C_CSequenceTransitioner2.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e0
        // Has VTable
        // 
        // static metadata: MNetworkOverride "m_baseLayer.m_hSequence"
        // static metadata: MNetworkVarNames "CNetworkedSequenceOperation m_baseLayer"
        // static metadata: MNetworkVarNames "float m_flPoseParameter"
        // static metadata: MNetworkVarNames "int m_nNewSequenceParity"
        // static metadata: MNetworkVarNames "int m_nResetEventsParity"
        // static metadata: MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
        #pragma pack(push, 1)
        class C_BaseAnimatingController : public source2sdk::client::CSkeletonAnimationController
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "baseAnimBaseLayerChanged"
            source2sdk::client::CNetworkedSequenceOperation m_baseLayer; // 0x10            
            bool m_bSequenceFinished; // 0x38            
            uint8_t _pad0039[0x3]; // 0x39
            float m_flGroundSpeed; // 0x3c            
            float m_flLastEventCycle; // 0x40            
            source2sdk::entity2::GameTime_t m_flLastEventAnimTime; // 0x44            
            float m_flSoundSyncTime; // 0x48            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "5,000000"
            // metadata: MNetworkEncodeFlags "8"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "playbackRateChanged"
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x4c            
            source2sdk::entity2::GameTime_t m_flPrevAnimTime; // 0x54            
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x58            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkUserGroup "m_flPoseParameter"
            // metadata: MNetworkChangeCallback "poseParametersChanged"
            float m_flPoseParameter[24]; // 0x5c            
            bool m_bNetworkedAnimationInputsChanged; // 0xbc            
            std::uint8_t m_nPrevNewSequenceParity; // 0xbd            
            std::uint8_t m_nPrevResetEventsParity; // 0xbe            
            bool m_bPlaybackRateLocked; // 0xbf            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "clientSideAnimCycleReset"
            std::int32_t m_nNewSequenceParity; // 0xc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_nResetEventsParity; // 0xc4            
            // metadata: MNetworkEnable
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0xc8            
            float m_flCachedSequenceCycleRate; // 0xcc            
            float m_flCachedGroundSpeed; // 0xd0            
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0xd4            
            bool m_bHasEverDispatchedAnimEvents; // 0xd5            
            uint8_t _pad00d6[0x29a]; // 0xd6
            source2sdk::client::C_CSequenceTransitioner2 m_SequenceTransitioner; // 0x370            
            source2sdk::animationsystem::HSequence m_hLastAnimEventSequence; // 0x528            
            uint8_t _pad052c[0xb4];
            
            // Datamap fields:
            // void m_iv_AnimOpHistory; // 0x538
            // void m_iv_flPoseParameter; // 0x588
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseAnimatingController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseAnimatingController) == 0x5e0);
    };
};
