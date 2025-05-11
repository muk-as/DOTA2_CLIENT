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
        class CTwistConstraint : public source2sdk::modellib::CBaseConstraint
        {
        public:
            bool m_bInverse; // 0x68            
            uint8_t _pad0069[0x7]; // 0x69
            Quaternion m_qParentBindRotation; // 0x70            
            Quaternion m_qChildBindRotation; // 0x80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTwistConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CTwistConstraint) == 0x90);
    };
};
