#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_RopeKeyframe;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class C_RopeKeyframe_CPhysicsDelegate
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::C_RopeKeyframe* m_pKeyframe; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_RopeKeyframe_CPhysicsDelegate, m_pKeyframe) == 0x8);
        
        static_assert(sizeof(source2sdk::client::C_RopeKeyframe_CPhysicsDelegate) == 0x10);
    };
};
