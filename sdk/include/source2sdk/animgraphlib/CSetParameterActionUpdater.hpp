#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"

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
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSetParameterActionUpdater : public source2sdk::animgraphlib::CAnimActionUpdater
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_hParam; // 0x18            
            CAnimVariant m_value; // 0x1a            
            uint8_t _pad002b[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSetParameterActionUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSetParameterActionUpdater) == 0x30);
    };
};
