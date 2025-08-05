#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x600
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "Vector m_vecBoundsMin"
        // static metadata: MNetworkVarNames "Vector m_vecBoundsMax"
        #pragma pack(push, 1)
        class C_DOTACameraBounds : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vecBoundsMin; // 0x5e8            
            // metadata: MNetworkEnable
            Vector m_vecBoundsMax; // 0x5f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTACameraBounds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTACameraBounds) == 0x600);
    };
};
