#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        struct ParticleNode_t
        {
        public:
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntity;
            char m_hEntity[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_iIndex; // 0x_            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            float m_flGrowthDuration; // 0x_            
            Vector m_vecGrowthOrigin; // 0x_            
            float m_flEndcapTime; // 0x_            
            bool m_bMarkedForDelete; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ParticleNode_t, m_hEntity) == 0x_);
        static_assert(offsetof(source2sdk::client::ParticleNode_t, m_iIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::ParticleNode_t, m_flStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::ParticleNode_t, m_flGrowthDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::ParticleNode_t, m_vecGrowthOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::ParticleNode_t, m_flEndcapTime) == 0x_);
        static_assert(offsetof(source2sdk::client::ParticleNode_t, m_bMarkedForDelete) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ParticleNode_t) == 0x_);
    };
};
