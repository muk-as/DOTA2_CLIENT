#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/CNetworkedSequenceOperation.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/C_CSequenceTransitioner2.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // 
    // static metadata: MNetworkOverride "m_baseLayer.m_hSequence"
    // static metadata: MNetworkVarNames "CNetworkedSequenceOperation m_baseLayer"
    // static metadata: MNetworkVarNames "float m_flPoseParameter"
    // static metadata: MNetworkVarNames "int m_nNewSequenceParity"
    // static metadata: MNetworkVarNames "int m_nResetEventsParity"
    // static metadata: MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
    #pragma pack(push, 1)
    class C_BaseAnimatingController : public client::CSkeletonAnimationController
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "baseAnimBaseLayerChanged"
        client::CNetworkedSequenceOperation m_baseLayer; // 0x10        
        // metadata: MNetworkDisable
        bool m_bSequenceFinished; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x39[0x3]; // 0x39
        // metadata: MNetworkDisable
        float m_flGroundSpeed; // 0x3c        
        // metadata: MNetworkDisable
        float m_flLastEventCycle; // 0x40        
        // metadata: MNetworkDisable
        entity2::GameTime_t m_flLastEventAnimTime; // 0x44        
        // metadata: MNetworkDisable
        float m_flSoundSyncTime; // 0x48        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "5,000000"
        // metadata: MNetworkEncodeFlags "8"
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "playbackRateChanged"
        CNetworkedQuantizedFloat m_flPlaybackRate; // 0x4c        
        // metadata: MNetworkDisable
        entity2::GameTime_t m_flPrevAnimTime; // 0x54        
        // metadata: MNetworkDisable
        entity2::GameTime_t m_flSeqStartTime; // 0x58        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        // metadata: MNetworkUserGroup "m_flPoseParameter"
        // metadata: MNetworkChangeCallback "poseParametersChanged"
        float m_flPoseParameter[24]; // 0x5c        
        // metadata: MNetworkDisable
        bool m_bNetworkedAnimationInputsChanged; // 0xbc        
        // metadata: MNetworkDisable
        uint8_t m_nPrevNewSequenceParity; // 0xbd        
        // metadata: MNetworkDisable
        uint8_t m_nPrevResetEventsParity; // 0xbe        
        [[maybe_unused]] std::uint8_t pad_0xbf[0x1]; // 0xbf
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "clientSideAnimCycleReset"
        int32_t m_nNewSequenceParity; // 0xc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_nResetEventsParity; // 0xc4        
        // metadata: MNetworkEnable
        client::AnimLoopMode_t m_nAnimLoopMode; // 0xc8        
        // metadata: MNetworkDisable
        float m_flCachedSequenceCycleRate; // 0xcc        
        // metadata: MNetworkDisable
        float m_flCachedGroundSpeed; // 0xd0        
        // metadata: MNetworkDisable
        client::SequenceFinishNotifyState_t m_nNotifyState; // 0xd4        
        // metadata: MNetworkDisable
        bool m_bHasEverDispatchedAnimEvents; // 0xd5        
        [[maybe_unused]] std::uint8_t pad_0xd6[0x29a]; // 0xd6
        // metadata: MNetworkDisable
        client::C_CSequenceTransitioner2 m_SequenceTransitioner; // 0x370        
        // metadata: MNetworkDisable
        animationsystem::HSequence m_hLastAnimEventSequence; // 0x528        
        [[maybe_unused]] std::uint8_t pad_0x52c[0xac];
        
        // Datamap fields:
        // void m_iv_AnimOpHistory; // 0x530
        // void m_iv_flPoseParameter; // 0x580
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseAnimatingController because it is not a standard-layout class
    static_assert(sizeof(C_BaseAnimatingController) == 0x5d8);
};
