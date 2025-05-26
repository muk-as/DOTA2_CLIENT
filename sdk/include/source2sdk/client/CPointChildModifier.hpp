#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointChildModifier : public source2sdk::client::C_PointEntity
        {
        public:
            bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x5e0            
            uint8_t _pad05e1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointChildModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPointChildModifier) == 0x5e8);
    };
};
