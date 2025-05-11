#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CBaseConstraint.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAimConstraint : public source2sdk::modellib::CBaseConstraint
        {
        public:
            uint8_t _pad0068[0x8]; // 0x68
            Quaternion m_qAimOffset; // 0x70            
            std::uint32_t m_nUpType; // 0x80            
            uint8_t _pad0084[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAimConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CAimConstraint) == 0x90);
    };
};
