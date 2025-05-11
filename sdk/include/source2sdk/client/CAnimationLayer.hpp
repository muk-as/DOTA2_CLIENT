#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/CNetworkedSequenceOperation.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xa8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CNetworkedSequenceOperation m_op"
        // static metadata: MNetworkVarNames "int m_nOrder"
        // static metadata: MNetworkVarNames "AnimLoopMode_t m_nSeqLoopMode"
        // static metadata: MNetworkVarNames "int m_nNewSequenceParity"
        // static metadata: MNetworkReplayCompatField "m_bLooping"
        #pragma pack(push, 1)
        class CAnimationLayer
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "animationLayerOpChanged"
            source2sdk::client::CNetworkedSequenceOperation m_op; // 0x30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "animationLayerOrderChanged"
            std::int32_t m_nOrder; // 0x58            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "5,000000"
            // metadata: MNetworkEncodeFlags "8"
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x5c            
            // metadata: MNetworkEnable
            source2sdk::client::AnimLoopMode_t m_nSeqLoopMode; // 0x64            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "animationLayerCycleReset"
            std::int32_t m_nNewSequenceParity; // 0x68            
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x6c            
            float m_flCachedSequenceCycleRate; // 0x70            
            std::int32_t m_nFlags; // 0x74            
            bool m_bSequenceFinished; // 0x78            
            uint8_t _pad0079[0x3]; // 0x79
            source2sdk::entity2::GameTime_t m_flKillStartTime; // 0x7c            
            float m_flKillRate; // 0x80            
            source2sdk::entity2::GameTime_t m_flLayerSuppressChangeTime; // 0x84            
            std::int32_t m_nActivity; // 0x88            
            std::int32_t m_nPriority; // 0x8c            
            float m_flLastEventCycle; // 0x90            
            float m_flFadeInFraction; // 0x94            
            float m_flFadeOutFraction; // 0x98            
            bool m_bHasFadedIn; // 0x9c            
            uint8_t _pad009d[0xb];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_op) == 0x30);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_nOrder) == 0x58);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_flPlaybackRate) == 0x5c);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_nSeqLoopMode) == 0x64);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_nNewSequenceParity) == 0x68);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_flSeqStartTime) == 0x6c);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_flCachedSequenceCycleRate) == 0x70);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_nFlags) == 0x74);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_bSequenceFinished) == 0x78);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_flKillStartTime) == 0x7c);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_flKillRate) == 0x80);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_flLayerSuppressChangeTime) == 0x84);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_nActivity) == 0x88);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_nPriority) == 0x8c);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_flLastEventCycle) == 0x90);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_flFadeInFraction) == 0x94);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_flFadeOutFraction) == 0x98);
        static_assert(offsetof(source2sdk::client::CAnimationLayer, m_bHasFadedIn) == 0x9c);
        
        static_assert(sizeof(source2sdk::client::CAnimationLayer) == 0xa8);
    };
};
