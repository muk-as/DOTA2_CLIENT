#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_SequenceFromCP : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "kill unused"
            bool m_bKillUnused; // 0x_            
            // metadata: MPropertyFriendlyName "offset propotional to radius"
            bool m_bRadiusScale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_nCP; // 0x_            
            // metadata: MPropertyFriendlyName "per particle spatial offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffset; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_SequenceFromCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_SequenceFromCP) == 0x_);
    };
};
