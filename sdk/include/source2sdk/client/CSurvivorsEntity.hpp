#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SurvivorsPhysicsBodyID_t.hpp"

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
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::SurvivorsPhysicsBodyID_t m_unPhysicsBodyID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsEntity, m_unPhysicsBodyID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEntity) == 0x_);
    };
};
