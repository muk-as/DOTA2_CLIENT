#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeKelagerBend2_t
        {
        public:
            float flWeight[3]; // 0x0            
            float flHeight0; // 0xc            
            std::uint16_t nNode[3]; // 0x10            
            std::uint16_t nReserved; // 0x16            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeKelagerBend2_t, flWeight) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeKelagerBend2_t, flHeight0) == 0xc);
        static_assert(offsetof(source2sdk::physicslib::FeKelagerBend2_t, nNode) == 0x10);
        static_assert(offsetof(source2sdk::physicslib::FeKelagerBend2_t, nReserved) == 0x16);
        
        static_assert(sizeof(source2sdk::physicslib::FeKelagerBend2_t) == 0x18);
    };
};
