#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "Vector m_vecBoundsMin"
        // static metadata: MNetworkVarNames "Vector m_vecBoundsMax"
        #pragma pack(push, 1)
        class CDOTACameraBounds : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vecBoundsMin; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vecBoundsMax; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTACameraBounds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTACameraBounds) == 0x_);
    };
};
