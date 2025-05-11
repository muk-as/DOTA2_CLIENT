#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CPathQueryComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
        // static metadata: MNetworkVarNames "CUtlString m_pathString"
        #pragma pack(push, 1)
        class CPathSimple : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04d8[0x8]; // 0x4d8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPathQueryComponent"
            // metadata: MNetworkAlias "CPathQueryComponent"
            // metadata: MNetworkTypeAlias "CPathQueryComponent"
            source2sdk::server::CPathQueryComponent m_CPathQueryComponent; // 0x4e0            
            uint8_t _pad0570[0x50]; // 0x570
            // metadata: MNetworkEnable
            CUtlString m_pathString; // 0x5c0            
            uint8_t _pad05c8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathSimple because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathSimple) == 0x5d0);
    };
};
