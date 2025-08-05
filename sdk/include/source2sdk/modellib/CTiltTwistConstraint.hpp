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
        class CTiltTwistConstraint : public source2sdk::modellib::CBaseConstraint
        {
        public:
            std::int32_t m_nTargetAxis; // 0x60            
            std::int32_t m_nSlaveAxis; // 0x64            
            uint8_t _pad0068[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTiltTwistConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CTiltTwistConstraint) == 0x90);
    };
};
