#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CNetworkedSequenceOperation.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "animationLayerOpChanged"
            source2sdk::server::CNetworkedSequenceOperation m_op; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "animationLayerOrderChanged"
            std::int32_t m_nOrder; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "5,000000"
            // metadata: MNetworkEncodeFlags "8"
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::AnimLoopMode_t m_nSeqLoopMode; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "animationLayerCycleReset"
            std::int32_t m_nNewSequenceParity; // 0x_            
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x_            
            float m_flCachedSequenceCycleRate; // 0x_            
            std::int32_t m_nFlags; // 0x_            
            bool m_bSequenceFinished; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flKillStartTime; // 0x_            
            float m_flKillRate; // 0x_            
            source2sdk::entity2::GameTime_t m_flLayerSuppressChangeTime; // 0x_            
            // metadata: MSaveOpsForField
            std::int32_t m_nActivity; // 0x_            
            std::int32_t m_nPriority; // 0x_            
            float m_flLastEventCycle; // 0x_            
            float m_flFadeInFraction; // 0x_            
            float m_flFadeOutFraction; // 0x_            
            bool m_bHasFadedIn; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_op) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_nOrder) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_flPlaybackRate) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_nSeqLoopMode) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_nNewSequenceParity) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_flSeqStartTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_flCachedSequenceCycleRate) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_bSequenceFinished) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_flKillStartTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_flKillRate) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_flLayerSuppressChangeTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_nActivity) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_nPriority) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_flLastEventCycle) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_flFadeInFraction) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_flFadeOutFraction) == 0x_);
        static_assert(offsetof(source2sdk::server::CAnimationLayer, m_bHasFadedIn) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CAnimationLayer) == 0x_);
    };
};
