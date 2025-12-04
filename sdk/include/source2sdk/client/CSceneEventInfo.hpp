#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CSceneEventInfo
        {
        public:
            std::int32_t m_iLayer; // 0x_            
            std::int32_t m_iPriority; // 0x_            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x_            
            float m_flWeight; // 0x_            
            bool m_bHasArrived; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nType; // 0x_            
            source2sdk::entity2::GameTime_t m_flNext; // 0x_            
            bool m_bIsGesture; // 0x_            
            bool m_bShouldRemove; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            source2sdk::client::SceneEventId_t m_nSceneEventId; // 0x_            
            bool m_bClientSide; // 0x_            
            bool m_bStarted; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_iLayer) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_iPriority) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hSequence) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flWeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bHasArrived) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_nType) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flNext) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bIsGesture) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bShouldRemove) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hTarget) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_nSceneEventId) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bClientSide) == 0x_);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bStarted) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSceneEventInfo) == 0x_);
    };
};
