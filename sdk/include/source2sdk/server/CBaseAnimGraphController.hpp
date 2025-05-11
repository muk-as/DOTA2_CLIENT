#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x380
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "HSequence m_hSequence"
        // static metadata: MNetworkVarNames "GameTime_t m_flSeqStartTime"
        // static metadata: MNetworkVarNames "float m_flSeqFixedCycle"
        // static metadata: MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
        #pragma pack(push, 1)
        class CBaseAnimGraphController : public source2sdk::client::CSkeletonAnimationController
        {
        public:
            uint8_t _pad0010[0x8]; // 0x10
            bool m_bSequenceFinished; // 0x18            
            uint8_t _pad0019[0x3]; // 0x19
            float m_flSoundSyncTime; // 0x1c            
            std::uint32_t m_nActiveIKChainMask; // 0x20            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkChangeCallback "OnNetworkedSequenceChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::animationsystem::HSequence m_hSequence; // 0x24            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x28            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            float m_flSeqFixedCycle; // 0x2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0x30            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "5,000000"
            // metadata: MNetworkEncodeFlags "8"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x34            
            uint8_t _pad003c[0x4]; // 0x3c
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0x40            
            uint8_t _pad0041[0x1]; // 0x41
            bool m_bNetworkedAnimationInputsChanged; // 0x42            
            bool m_bNetworkedSequenceChanged; // 0x43            
            bool m_bLastUpdateSkipped; // 0x44            
            uint8_t _pad0045[0x3]; // 0x45
            source2sdk::entity2::GameTime_t m_flPrevAnimUpdateTime; // 0x48            
            uint8_t _pad004c[0x334];
            
            // Datamap fields:
            // void m_pAnimGraphInstance; // 0x2e8
            // float m_flCachedSequenceCycleRate; // 0x3c
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraphController) == 0x380);
    };
};
