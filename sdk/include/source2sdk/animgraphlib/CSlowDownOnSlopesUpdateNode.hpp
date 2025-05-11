#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x78
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSlowDownOnSlopesUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            float m_flSlowDownStrength; // 0x70            
            uint8_t _pad0074[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSlowDownOnSlopesUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSlowDownOnSlopesUpdateNode) == 0x78);
    };
};
